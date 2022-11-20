/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 10:04:40 by wchen             #+#    #+#             */
/*   Updated: 2022/07/14 23:24:11 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;

	dst_ptr = (unsigned char *) dst;
	src_ptr = (const unsigned char *) src;
	if (dst_ptr <= src_ptr)
	{
		while (n--)
			*dst_ptr++ = *src_ptr++;
	}
	else
	{
		dst_ptr += n;
		src_ptr += n;
		while (n--)
			*--dst_ptr = *--src_ptr;
	}
	return (dst);
}
// int main(void)
// {
// 	char dst[] = "0123456789";
// 	//char src[] = "9876543210";
// 	ft_memmove(dst+3 , dst, 5);
// 	printf("%s\n", dst);
// 	return 0;
// }
