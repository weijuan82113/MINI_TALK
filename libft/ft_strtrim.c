/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 23:27:38 by wchen             #+#    #+#             */
/*   Updated: 2022/09/13 01:24:35 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_set(char s1, char const *set)
{
	size_t	y;

	y = 0;
	while (set[y] != '\0')
	{
		if (s1 == set[y])
			return (1);
		y ++;
	}
	return (0);
}

size_t	check_fisrt(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (check_set(s1[i], set) == 0)
			return (i);
		i ++;
	}
	return (i);
}

size_t	check_last(char const *s1, char const *set)
{
	size_t	len_s1;

	len_s1 = ft_strlen(s1);
	while (len_s1 > 0)
	{
		if (check_set(s1[len_s1 - 1], set) == 0)
			return (len_s1);
		len_s1 --;
	}
	return (len_s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	t_ft_strtrim	var;

	if (!set || !s1)
		return (NULL);
	var.len_r_chr = ft_strlen(s1);
	var.last = check_last (s1, set);
	if (var.last == 0)
		return (ft_strdup(""));
	var.first = check_fisrt (s1, set);
	var.len_r_chr = var.last - var.first;
	var.r_chr = (char *)ft_calloc(var.len_r_chr + 1, sizeof(char));
	if (!var.r_chr)
		return (NULL);
	var.i = 0;
	while (var.i < var.len_r_chr)
	{
		var.r_chr[var.i] = s1[var.first + var.i];
		var.i ++;
	}
	return (var.r_chr);
}
// #include <stdio.h>
// int main (void)
// {
// 	char s1[] = "123455567123124";
// 	// char *s1;
// 	// s1 = NULL;
// 	char set[] = "1234567";
// 	// char *set;
// 	// set = NULL;
// 	char *ans;
// 	ans = ft_strtrim(s1, set);
// 	printf("the answer is %s\n", ans);
// 	free(ans);
// 	return 0;
// }
