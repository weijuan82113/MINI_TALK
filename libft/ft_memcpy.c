/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 10:04:40 by wchen             #+#    #+#             */
/*   Updated: 2022/07/14 23:35:02 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char			*dst_ptr;
	const unsigned char		*src_ptr;

	dst_ptr = (unsigned char *) dst;
	src_ptr = (const unsigned char *) src;
	while (n--)
	{
		*dst_ptr++ = *src_ptr++;
	}
	return (dst);
}
// int main(void)
// {
// 	char dst[] = "0123456789";
// 	char src[] = "543\010";
// 	ft_memcopy(dst , src, 5);
// 	printf("%s\n", dst);
// 	return 0;
// }
