/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:29:21 by wchen             #+#    #+#             */
/*   Updated: 2022/07/30 16:29:21 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*dest = (unsigned char *) s1;
	const unsigned char	*src = (unsigned char *) s2;

	i = 0;
	while (i < n)
	{
		if (*dest == *src)
		{
			dest ++;
			src ++;
		}
		else
			return (*dest - *src);
		i ++;
	}
	return (0);
}
// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char		s1[] = "a'\0'afda";
// 	char		s2[] = "a'\0'afh";
// 	int			n;
// 	int			ret;

// 	n = 6;
// 	printf("s1 =%s\n", s1+n-1);
// 	printf("s2 =%s\n", s2+n-1);
// 	printf("memcmp=%d\n", memcmp(s1, s2, n));
// 	ret = ft_memcmp(s1, s2, n);
// 	printf("ret=%d\n", ret);
// }
