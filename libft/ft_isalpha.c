/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 23:52:38 by wchen             #+#    #+#             */
/*   Updated: 2022/10/11 23:33:51 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((65 <= c && c <= 90) | (97 <= c && c <= 122))
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	char testalpha = 'a';
// 	printf("the answer is %d",ft_isalpha(testalpha));
// 	return 0;
// }
