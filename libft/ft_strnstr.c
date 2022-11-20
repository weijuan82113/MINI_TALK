/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:48:49 by wchen             #+#    #+#             */
/*   Updated: 2022/10/02 23:22:06 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isempty(const char *s)
{
	if (s == NULL || !ft_strlen(s))
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	needle_len;

	needle_len = ft_strlen (needle);
	if (ft_isempty (needle))
		return ((char *)haystack);
	while (!ft_isempty (haystack) && len >= needle_len && len > 0)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		else
			haystack ++;
		len --;
	}
	return (NULL);
}
// #include <string.h>
// #include <stdio.h>

// int main (void)
// {
// 	char dst_ch[] = "zabcbbcefgrefabg";
// 	char src_ch[] = "cbbc";
// 	unsigned int i = 0;
// 	printf("strnstr 1 is %s\n",strnstr(dst_ch,src_ch,i));
// 	printf("strnstr 2 is %s\n",strnstr(NULL, "is", 0));
// 	printf("strnstr 3 is %s\n",strnstr("abbbcdefg", "bbc", 20));
// 	printf("answer 1 is %s\n",ft_strnstr(dst_ch,src_ch,i));
// 	printf("answer 2 is %s\n",ft_strnstr(NULL, "is", 0));
// 	printf("answer 3 is %s\n",ft_strnstr("abbbcdefg", "bbc", 20));
// 	return 0;
// }
