/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:44:04 by wchen             #+#    #+#             */
/*   Updated: 2022/09/19 20:34:11 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return ((32 <= c && c <= 126));
}
// int main(void)
// {
// 	char testalpha = NULL;
// 	printf("the answer is %d",isprint(testalpha));
// 	return 0;
// }
