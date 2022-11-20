/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:44:04 by wchen             #+#    #+#             */
/*   Updated: 2022/07/14 23:35:44 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}
// int main(void)
// {
// 	char testalpha = NULL;
// 	printf("the answer is %d",isascii(testalpha));
// 	return 0;
// }
