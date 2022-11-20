/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:39:10 by wchen             #+#    #+#             */
/*   Updated: 2022/07/31 16:47:15 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const unsigned char	p_src = (unsigned char)c;

	while (*s != '\0')
	{
		if (*s == p_src)
			return ((char *)s);
		s ++;
	}
	if (*s == p_src)
		return ((char *)s);
	else
		return (NULL);
}
// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
// 	char dst_ch[] = "abcdefgbea";
// 	int src_ch = '\0';
// 	printf("strchr is %s\n",strchr(dst_ch,src_ch));
// 	printf("the answer is %s\n",ft_strchr(dst_ch,src_ch));
// 	return 0;
// }
