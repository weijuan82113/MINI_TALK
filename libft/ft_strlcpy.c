/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 22:04:55 by wchen             #+#    #+#             */
/*   Updated: 2022/07/12 22:04:55 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
		i ++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>
// int    main(void)
// {
//     char    dest[10];
//     char    dest2[10];
//     char    src[100] = "qJxqmoQXo_rfaerf";
//     char    src2[100] = "WXVfadcfuJkx_rgae";
//     char    src3[100] = "VtFQwLApiFWqdJEvFxp_dvsdfza";
//     char    src4[100] = "";
//     int        i;
//     int        n;

//     i = 0;
//     n = 10;
//     i = strlcpy(dest2, src, n);
//     printf("%d\n", i);
//     printf("%s\n", dest2);
//     i = ft_strlcpy(dest, src, n);
//     printf("%d\n", i);
//     printf("%s\n", dest);
//     printf("END\n");

//     n = 10;
//     i = strlcpy(dest2, src2, n);
//     printf("%d\n", i);
//     printf("%s\n", dest2);
//     i = ft_strlcpy(dest, src2, n);
//     printf("%d\n", i);
//     printf("%s\n", dest);
//     printf("END\n");

//     n = 0;
//     i = strlcpy(dest2, src3, n);
//     printf("%d\n", i);
//     printf("%s\n", dest2);
//     i = ft_strlcpy(dest, src3, n);
//     printf("%d\n", i);
//     printf("%s\n", dest);
//     printf("END\n");

//     n = 10;
//     i = strlcpy(dest2, src4, n);
//     printf("%d\n", i);
//     printf("%s\n", dest2);
//     i = ft_strlcpy(dest, src4, n);
//     printf("%d\n", i);
//     printf("%s\n", dest);
//     printf("END\n");

//     return (0);
// }
