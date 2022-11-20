/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:39:10 by wchen             #+#    #+#             */
/*   Updated: 2022/08/01 00:04:25 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const unsigned char	p_src = (unsigned char) c;
	size_t				i;

	i = 0;
	while (s[i] != '\0')
		++ i;
	while (i != 0)
	{
		if (s[i] == p_src)
			return ((char *)(s + i));
		i--;
	}
	if (s[i] == p_src)
		return ((char *)(s + i));
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
// 	char dst_ch1[] = "zabcbbcefgrefabg";
// 	char dst_ch2[] = "";
// 	int src_ch = 'z';
// 	printf("strrchr1 is %s\n",strrchr(dst_ch1,src_ch));
// 	printf("ths answer1 is %s\n",ft_strrchr(dst_ch1,src_ch));
// 	printf("strrchr2 is %s\n",strrchr(dst_ch2,src_ch));
// 	printf("ths answer2is %s\n",ft_strrchr(dst_ch2,src_ch));
// 	return 0;
// }
