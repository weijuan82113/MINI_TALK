/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:16:17 by wchen             #+#    #+#             */
/*   Updated: 2022/09/19 22:28:39 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			num;
	unsigned int	un_i;

	un_i = (unsigned int)n;
	if (fd < 0)
		return ;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		un_i *= -1;
	}
	if (un_i > 9)
	{
		ft_putnbr_fd((int)(un_i / 10), fd);
		ft_putnbr_fd((int)(un_i % 10), fd);
	}
	else
	{
		num = un_i + '0';
		ft_putchar_fd(num, fd);
	}
}

// #include <stdio.h>
// #include <fcntl.h>
// #include <sys/types.h>
// #include <sys/stat.h>
// #include <limits.h>

// int main(void)
// {
// 	int fd;
// 	int i = INT_MAX;
// 	//int i = -42;
// 	fd = 1;
// 	//fd = open("./hoge.txt", O_RDWR);
// 	ft_putnbr_fd(i, fd);
// 	return 0;
// }
