/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 23:50:06 by wchen             #+#    #+#             */
/*   Updated: 2022/07/30 23:50:06 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static long long	overflow(int minus_number)
{
	if (minus_number == 1)
		return (LONG_MIN);
	else
		return (LONG_MAX);
}

static long long	chrtoi(long long num, int minus_number, const char *str)
{
	if (num > LONG_MAX / 10 || num < LONG_MIN / 10)
		return (overflow(minus_number));
	if (num == LONG_MAX / 10 && (*str - '0') > LONG_MAX % 10)
		return (overflow(minus_number));
	if (num == LONG_MIN / 10 && (*str - '0') > LONG_MIN % 10 * (-1))
		return (overflow(minus_number));
	if (minus_number == 1)
		num = num * 10 - (*str - '0');
	else
		num = num * 10 + (*str - '0');
	return (num);
}

int	ft_atoi(const char *str)
{
	int			operator_number;
	int			minus_number;
	long long	num;

	while ((9 <= *str && *str <= 13) || *str == 32)
		str ++;
	operator_number = 0;
	minus_number = 0;
	while (*str == '-' || *str == '+')
	{
		operator_number ++;
		if (operator_number > 1)
			return (0);
		if (*str == '-')
			minus_number ++;
		str ++;
	}
	num = 0;
	while ('0' <= *str && *str <= '9')
	{
		num = chrtoi(num, minus_number, str);
		str ++;
	}
	return ((int)num);
}
// #include <stdlib.h>
// #include <stdio.h>
// #include <stdio.h>
// int main(void)
// {
// 	//   \f\r\n\r\t2147483647
// 	//char str[] = "\f\r\n\r\t-2147483649";
// 	char str[] = "9223372036854775806";
// 	printf("atoi is %d\n", atoi (str));
// 	printf("ft_atoi is %d\n", ft_atoi (str));
// 	return (0);
// }
