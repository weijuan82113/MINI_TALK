/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:11:43 by wchen             #+#    #+#             */
/*   Updated: 2022/09/13 16:49:07 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r_chr;
	size_t	len_s;
	size_t	i;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len_s - start < len)
		len = len_s - start;
	r_chr = (char *)ft_calloc((len + 1), sizeof(char));
	if (!r_chr)
		return (NULL);
	i = 0;
	while (s[i + start] != '\0' && i < len)
	{
		r_chr[i] = s[i + start];
		i ++;
	}
	r_chr[i] = '\0';
	return (r_chr);
}
// #include <stdio.h>
// int main (void)
// {
// 	//char ch[] = "absdfsgergg";
// 	// char *ch;
// 	// ch = NULL;
// 	//unsigned int start = 3;
// 	//size_t len =10;
// 	//char * ans1;
// 	char * ans2;

// 	//ans1 = ft_substr(ch, start, len);
// 	ans2 = ft_substr("tripouille", 100, 1);
// 	//printf("the answer1 is %s\n", ans1);
// 	printf("the answer2 is %s\n", ans2);
// 	system("leaks a.out");
// 	//free(ans1);
// 	free(ans2);

// 	return 0;
// }
