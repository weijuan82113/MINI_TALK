/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 10:04:40 by wchen             #+#    #+#             */
/*   Updated: 2022/07/15 23:33:35 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n--)
		*ptr++ = '\0';
	return (s);
}
// int main(void)
// {
// 	char str[] = "0123456789";
// 	ft_bzero(str, 5);
// 	printf("%s\n", str + 5);
// 	return 0;
// }
