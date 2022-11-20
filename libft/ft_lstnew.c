/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:39:10 by wchen             #+#    #+#             */
/*   Updated: 2022/11/01 00:30:13 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_lstnew(void *content)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node -> content = content;
	node -> next = NULL;
	return (node);
}
// #include <stdio.h>

// int main (void)
// {
// 	char *content = "abcd";
// 	t_node *node;
// 	char *str;

// 	node = ft_lstnew(content);
// 	str = node -> content;
// 	printf("content of node is %s", str);
// 	return (0);
// }
