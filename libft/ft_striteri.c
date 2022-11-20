/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:57:25 by wchen             #+#    #+#             */
/*   Updated: 2022/09/17 13:10:33 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i ++;
		}
	}
}
// #include <stdio.h>

// static void	f(unsigned int i, char *s)
// {
// 	*s = *s + i;
// }

// int main(void)
// {
// 	char	str1[] = "abc";

// 	ft_striteri(str1, *f);
// 	printf("%s \n", str1);
// 	return 0;
// }
