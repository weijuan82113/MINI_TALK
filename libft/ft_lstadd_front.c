/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:39:10 by wchen             #+#    #+#             */
/*   Updated: 2022/10/30 23:23:24 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_node **lst, t_node *new)
{
	if (!lst || !new)
		return ;
	else if (!*lst)
		*lst = new;
	else
	{
		new -> next = *lst;
		*lst = new;
	}
}

// #include <stdio.h>

// int main (void)
// {
// 	char 	*content_node = "abcd";
// 	char 	*content_new_node = "efgh";
// 	t_node	*new_node;
// 	t_node	*list_node;
// 	t_node	**lst;
// 	char	*str;

// 	lst = &list_node;
// 	new_node = ft_lstnew(content_new_node);
// 	list_node = ft_lstnew(content_node);
// 	ft_lstadd_front(lst, new_node);
// 	printf("content of node is %s", lst);
// 	return (0);
// }
