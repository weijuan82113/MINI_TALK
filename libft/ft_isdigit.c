/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:24:05 by wchen             #+#    #+#             */
/*   Updated: 2022/10/11 22:22:54 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}
// int main(void)
// {
// 	char testdigit = '4';
// 	printf("the answer is %d",ft_isdigit(testdigit));
// 	return 0;
// }
