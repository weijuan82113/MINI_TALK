/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:39:10 by wchen             #+#    #+#             */
/*   Updated: 2022/09/19 22:28:40 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p_dest = (unsigned char *)s;
	const unsigned char	p_src = (unsigned char)c;

	i = 0;
	while (i < n)
	{
		if (*p_dest == p_src)
			return ((void *)p_dest);
		p_dest ++;
		i ++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// #include <stdio.h>
// int main (void)
// {
// 	char dst_ch[] = "abcdefgbea";
// 	int src_ch = 0xff;
// 	unsigned int i = 11;
// 	printf("the memchr is %s\n",(char *)memchr(dst_ch, src_ch, i));
// 	printf("the answer is %s\n",(char *)ft_memchr(dst_ch, src_ch, i));

// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	printf("the memchr is %s\n",(char *)memchr(s, 2 + 256, 3));
// 	printf("the answer is %s\n",(char *)ft_memchr(s, 2 + 256, 3));

// 	return 0;
// }
