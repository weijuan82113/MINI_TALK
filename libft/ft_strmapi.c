/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:16:17 by wchen             #+#    #+#             */
/*   Updated: 2022/09/18 21:21:47 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len_s;
	size_t	i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	len_s = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len_s + 1));
	if (!str)
		return (NULL);
	while (i < len_s)
	{
		str[i] = f(i, s[i]);
		i ++;
	}
	str[i] = '\0';
	return (str);
}
// static char	f(unsigned int i, char c)
// {
// 	char	str;

// 	str = c + i;
// 	return (str);
// }

// #include <stdio.h>

// int main(void)
// {
// 	char	str1[] = "abc";
// 	char	*str2;

// 	str2 = ft_strmapi(str1, *f);
// 	printf("%s \n", str2);
// 	return 0;
// }
