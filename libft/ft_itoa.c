/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:13:44 by wchen             #+#    #+#             */
/*   Updated: 2022/10/12 02:33:54 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_digit(int judge_int)
{
	size_t	i;

	i = 0;
	if (judge_int == 0)
		return (1);
	while (judge_int != 0)
	{
		i ++;
		judge_int = judge_int / 10;
	}
	return (i);
}

char	*convert_reverse_itoa(int n, char *chr, size_t i)
{
	if (n == 0 && i == 0)
	{
		*chr = '0';
		*(++chr) = '\0';
		return (chr);
	}
	if (n == 0)
	{
		*chr = '\0';
		return (chr);
	}
	if (n > 0)
		*chr = n % 10 + '0';
	else
		*chr = (-(long int)n) % 10 + '0';
	return (convert_reverse_itoa(n / 10, ++ chr, ++i));
}

char	*ft_reverse(char *chr, size_t i)
{
	char	*ret_char;
	size_t	j;

	ret_char = (char *)malloc(sizeof(char) * i + 1);
	if (!ret_char)
		return (NULL);
	j = i;
	while (i -- != 0)
		ret_char[j - 1 - i] = chr[i];
	ret_char[j] = '\0';
	return (ret_char);
}

char	*ft_isminus(char *temp_char)
{
	char		*ret_char;
	const char	minus_char[] = "-";

	ret_char = ft_strjoin (minus_char, temp_char);
	free (temp_char);
	return (ret_char);
}

char	*ft_itoa(int n)
{
	size_t	i;
	int		minus;
	char	*cal_char;
	char	*temp_char;
	char	*ret_char;

	minus = 0;
	if (n < 0)
		minus = 1;
	i = count_digit(n);
	cal_char = (char *)malloc(sizeof(char) * i + 1);
	if (!cal_char)
		return (NULL);
	temp_char = cal_char;
	convert_reverse_itoa (n, cal_char, 0);
	temp_char = ft_reverse(temp_char, i);
	free(cal_char);
	if (!temp_char)
		return (NULL);
	if (minus)
		ret_char = ft_isminus(temp_char);
	else
		ret_char = temp_char;
	return (ret_char);
}
// #include <stdio.h>

// int main (void)
// {
// 	int i = -2147483648;
// 	char* ans;
// 	ans = ft_itoa(i);
// 	printf("the answer is %s\n", ans);
// 	free(ans);

// 	return 0;
// }
