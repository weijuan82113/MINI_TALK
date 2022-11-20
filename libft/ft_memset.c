/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 10:04:40 by wchen             #+#    #+#             */
/*   Updated: 2022/07/15 23:20:39 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int c, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	ch = (unsigned char) c;

	ptr = (unsigned char *) buf;
	while (n--)
		*ptr++ = ch;
	return (buf);
}
// int main(void)
// {
// 	char str[] = "0123456789";
// 	ft_memset(str + 2, '*', 5);
// 	printf("%s\n", str);
// 	return 0;
// }
