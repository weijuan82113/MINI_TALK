/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:16:17 by wchen             #+#    #+#             */
/*   Updated: 2022/09/16 22:40:40 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// #include <stdio.h>
// #include <fcntl.h>
// #include <sys/types.h>
// #include <sys/stat.h>

// int main(void)
// {
// 	int fd;
// 	char s[] = "efg";

// 	fd = 0;
// 	fd = open("./hoge.txt", O_RDWR);
// 	printf("fd %d \n",fd);
// 	ft_putendl_fd(s, fd);
// 	return 0;
// }
