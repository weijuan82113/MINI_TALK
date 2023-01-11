/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 00:40:45 by wchen             #+#    #+#             */
/*   Updated: 2023/01/11 22:08:37 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_talk.h"

volatile sig_atomic_t	g_bit = 0;

static void	client_action(int sig_num)
{
	if (sig_num == SIGUSR1)
		g_bit++;
}

static void	send_char(pid_t server_pid, char *send_str)
{
	char		send_chr;
	int			i;

	while (*send_str)
	{
		send_chr = *send_str;
		i = 0;
		while (i < 8 && *send_str != '\0')
		{
			usleep(50);
			if (send_chr & 0x01)
			{
				if(kill(server_pid, SIGUSR2) != 0)
					msg_exit("kill wrong in SIGUSR2\n", EXIT_FAILURE);
			}
			else
			{
				if(kill(server_pid, SIGUSR1) != 0)
					msg_exit("kill wrong in SIGUSR1\n", EXIT_FAILURE);
			}
			pause();
			send_chr = send_chr >> 1;
			i++;
		}
		send_str++;
	}
}

int	main(int argc, char **argv)
{
	char				*send_str;
	pid_t				server_pid;
	struct sigaction	sigact;

	if (argc != 3)
		msg_exit("wrong variables\n", EXIT_FAILURE);
	send_str = argv[2];
	if (!ft_strlen(send_str))
		msg_exit("wrong send string\n", EXIT_FAILURE);
	server_pid = ft_atoi(argv[1]);
	if (server_pid == 0)
		msg_exit("wrong pid\n", EXIT_FAILURE);
	ft_bzero(&sigact, sizeof(struct sigaction));
	sigact.sa_handler = client_action;
	sigact.sa_flags = SA_NODEFER;
  	if(sigaction(SIGUSR1, &sigact, NULL))
		msg_exit("sigaction wrong in SIGUSR1\n", EXIT_FAILURE);
	send_char(server_pid, send_str);
	ft_printf("server received : %d bytes\n", g_bit/8);fflush(stdout);
	return (0);
}
