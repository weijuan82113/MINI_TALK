/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 00:40:45 by wchen             #+#    #+#             */
/*   Updated: 2022/11/21 20:37:26 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_talk.h"

volatile sig_atomic_t	g_byte = 0;

void	client_handler(int sig_num)
{
	if (sig_num == SIGUSR1)
		g_byte++;
}

void	send_char(pid_t server_pid, char *send_str)
{
	char	send_chr;
	int		i;

	while (*send_str)
	{
		send_chr = *send_str;
		i = 0;
		while (i < 8)
		{
			if (send_chr & 0x01)
				kill(server_pid, SIGUSR2);
			else
				kill(server_pid, SIGUSR1);
			usleep(500);
			send_chr = send_chr >> 1;
			i++;
		}
		send_str++;
	}
}

int	main(int argc, char **argv)
{
	char	*send_str;
	pid_t	server_pid;

	if (argc != 3)
	{
		ft_printf("wrong variables\n");
		return (1);
	}
	send_str = argv[2];
	if (!ft_strlen(send_str))
	{
		ft_printf("wrong send string\n");
		return (1);
	}
	signal(SIGUSR1, client_handler);
	server_pid = ft_atoi(argv[1]);
	send_char(server_pid, send_str);
	ft_printf("server received : %d bytes\n", g_byte);
	return (0);
}
