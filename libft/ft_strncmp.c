/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:24:33 by wchen             #+#    #+#             */
/*   Updated: 2022/07/30 15:24:33 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*un_s1 = (unsigned char*) s1;
	const unsigned char	*un_s2 = (unsigned char*) s2;

	i = 0;
	while (i < n)
	{
		if (un_s1[i] != un_s2[i] || !un_s1[i] || !un_s2[i])
			return ((int)(un_s1[i] - un_s2[i]));
		i ++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// #include <limits.h>
// int main(void)
// {
// 	// char		s1[100];
// 	// char		s2[100];
// 	// int			n;
// 	// int			ret;

// 	// strcpy(s1, "aafda");
// 	// strcpy(s2, "aafdasdf");
// 	// n = 6;
// 	// printf("s1 =%s\n", s1);
// 	// printf("s2 =%s\n", s2);
// 	// printf("n =%d\n", n);
// 	// printf("strncmp=%d\n", strncmp(s1, s2, n));
// 	// ret = ft_strncmp(s1, s2, n);
// 	// printf("ret=%d\n", ret);
//  }
