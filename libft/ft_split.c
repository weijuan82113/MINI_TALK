/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:11:43 by wchen             #+#    #+#             */
/*   Updated: 2022/09/20 00:50:40 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	split_len(char *s, char c)
{
	size_t	count;

	count = 0;
	while (s[count] != c && s[count])
		count ++;
	return (count);
}

static size_t	count_split_area(char const *s, char c, char *judge_char)
{
	size_t	count;

	while (*s == c && c != 0)
		s ++;
	count = 0;
	while (*s != '\0' && c != 0)
	{
		while (*s != c && *s)
			*judge_char ++ = *s ++;
		if (*s == c)
			*judge_char ++ = c;
		count ++;
		while (*s == c)
			s ++;
	}
	if (count == 0)
		while (*s != '\0')
			*judge_char++ = *s++;
	*judge_char = '\0';
	return (count);
}

static void	*free_all(char **chr, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free (chr[i]);
		i ++;
	}
	free (chr);
	return (NULL);
}

static char	**split_char(char *judge_char, char c, char **ret_char)
{
	size_t	i;
	size_t	x;
	size_t	y;

	y = 0;
	while (*judge_char != '\0')
	{
		i = split_len (judge_char, c);
		ret_char[y] = (char *)malloc(sizeof(char) * i + 1);
		if (!ret_char[y])
			return (free_all(ret_char, y));
		x = 0;
		while (*judge_char != c && *judge_char)
		{
			ret_char[y][x] = *judge_char;
			x ++;
			judge_char ++;
		}
		ret_char[y][x] = '\0';
		y ++;
		if (*judge_char)
			judge_char ++;
	}
	ret_char[y] = NULL;
	return (ret_char);
}

char	**ft_split(char const *s, char c)
{
	char	**ret_char;
	size_t	count;
	size_t	len_s;
	char	*judge_char;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	judge_char = (char *)malloc(sizeof(char) * len_s + 1);
	if (!judge_char)
		return (NULL);
	count = count_split_area(s, c, judge_char);
	ret_char = (char **)malloc(sizeof(char *) * count + 1);
	if (!ret_char)
	{
		free (judge_char);
		return (NULL);
	}
	ret_char = split_char(judge_char, c, ret_char);
	free (judge_char);
	return (ret_char);
}
//#include <stdio.h>
// int main (void)
// {
// 	//char *ch = NULL;
// 	char ch[] = "hello,world,42,tokyo";
// 	char c = ',';
// 	char **ans;
// 	size_t i;

// 	ans = ft_split(ch, c);
// 	i = 0;
// 	if(!ans)
// 		return (0);
// 	while (ans[i])
// 	{
// 		printf("the answer %ld is %s \n",i,ans[i]);
// 		i ++;
// 	}
// 	free(ans);
// 	return 0;
// }
