/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:11:43 by wchen             #+#    #+#             */
/*   Updated: 2022/09/07 22:02:52 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret_p;
	size_t	i;
	size_t	len_s1;

	len_s1 = ft_strlen(s1);
	ret_p = (char *)malloc(sizeof(char) * (len_s1 + 1));
	if (!ret_p)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ret_p[i] = s1[i];
		i ++;
	}
	ret_p[i] = '\0';
	return (ret_p);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char *s, *f;
// 	char str[] = "abcdefg";
// 	s = strdup(str);
// 	printf("strdup    = %s\n", s);

// 	f = ft_strdup(str);
// 	printf("ft_strdup = %s\n", f);

// 	free(s);
// 	free(f);

//   return 0;
// }
