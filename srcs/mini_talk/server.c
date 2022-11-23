/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 00:40:40 by wchen             #+#    #+#             */
/*   Updated: 2022/11/21 20:37:30 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_talk.h"

void	sever_action(int signum, siginfo_t *s_info, void *ucontext)
{
	static int			bit = 0;
	static unsigned int	s_chr = 0;

	(void)ucontext;
	if (signum == SIGUSR1)
		s_chr += 0x00 << bit;
	else
		s_chr += 0x01 << bit;
	bit++;
	if (bit == 8)
	{
		ft_putchar_fd((char)s_chr, 1);
		kill(s_info->si_pid, SIGUSR1);
		s_chr = 0;
		bit = 0;
	}
}

int	main(void)
{
	struct sigaction	sact;

	ft_bzero(&sact, sizeof(struct sigaction));
	sact.sa_sigaction = sever_action;
	if (sigemptyset(&sact.sa_mask) == -1)
		msg_exit("sigemptyset wrong\n", EXIT_FAILURE);
	sact.sa_flags = SA_SIGINFO;
	if (sigaction(SIGUSR1, &sact, NULL) == -1)
		msg_exit("sigaction wrong in SIGUSR1\n", EXIT_FAILURE);
	if (sigaction(SIGUSR2, &sact, NULL) == -1)
		msg_exit("sigaction wrong in SIGUSR2\n", EXIT_FAILURE);
	ft_printf("PID : %d \n", getpid());
	ft_printf("wait for singal...\n");
	while (1)
		pause();
	return (0);
}
