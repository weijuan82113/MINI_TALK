/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:16:17 by wchen             #+#    #+#             */
/*   Updated: 2022/09/16 22:26:51 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write (fd, &c, 1);
}

// #include <stdio.h>
// #include <fcntl.h>
// #include <sys/types.h>
// #include <sys/stat.h>

// int main(void)
// {
// 	int fd;

// 	fd = 0;
// 	fd = open("./hoge.txt", O_RDWR);
// 	printf("fd %d \n",fd);
// 	ft_putchar_fd('b', fd);
// 	return 0;
// }
