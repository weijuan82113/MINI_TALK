/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 22:05:54 by wchen             #+#    #+#             */
/*   Updated: 2022/07/12 22:05:54 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	dest_len = ft_strlen(dest);
	if (dest_len >= size)
		return (src_len + size);
	ft_strlcpy(dest + dest_len, src, size - dest_len);
	return (dest_len + src_len);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char			dest[5];
// 	char			src[50];
// 	unsigned int	size;

// 	strcpy(dest, "abc");
// 	strcpy(src, "defg");
// 	//size = sizeof(dest);
// 	size = 0;
// 	printf("strlcat=%lu\n", strlcat(NULL, "42tokyo", size));
// 	printf("result=%s\n", dest);
// 	strcpy(dest, "abc");
// 	strcpy(src, "defg");
// 	printf("ft_strlcat=%lu\n", ft_strlcat(NULL, "42tokyo", size));
// 	printf("result= %s\n", dest);
// }
