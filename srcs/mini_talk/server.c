/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 00:40:40 by wchen             #+#    #+#             */
/*   Updated: 2023/01/11 22:08:39 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_talk.h"

static void	server_action(int signum, siginfo_t *s_info, void *ucontext)
{
	static int			bit = 0;
	static unsigned int	s_chr = 0;

	(void)ucontext;
	usleep(50);
	if (signum == SIGUSR1)
	{
		s_chr += 0x00 << bit;
		if (kill(s_info->si_pid, SIGUSR1) != 0)
			msg_exit("kill wrong in SIGUSR1\n", EXIT_FAILURE);
	}
	else if (signum)
	{
		s_chr += 0x01 << bit;
		if (kill(s_info->si_pid, SIGUSR1) != 0)
			msg_exit("kill wrong in SIGUSR1\n", EXIT_FAILURE);
	}
	bit++;
	if (bit == 8)
	{
		ft_putchar_fd((char)s_chr, 1);
		s_chr = 0;
		bit = 0;
	}
}

int	main(void)
{
	struct sigaction	sact;

	ft_bzero(&sact, sizeof(struct sigaction));
	sact.sa_sigaction = server_action;
	sact.sa_flags = SA_SIGINFO;
	if (sigemptyset(&sact.sa_mask) == -1)
		msg_exit("sigemptyset wrong\n", EXIT_FAILURE);
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
