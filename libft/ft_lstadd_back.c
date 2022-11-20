/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:39:10 by wchen             #+#    #+#             */
/*   Updated: 2022/10/30 23:23:24 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*tail_list;

	if (!lst || !new)
		return ;
	else if (!*lst)
		*lst = new;
	else
	{
		tail_list = ft_lstlast(*lst);
		tail_list -> next = new;
	}
}
// #include <stdio.h>

// int main (void)
// {
// 	char 	*content_node = "abcd";
// 	char 	*content_front_node = "efgh";
// 	char 	*content_back_node = "ijkl";
// 	t_node	*new_node_front;
// 	t_node	*new_node_back;
// 	t_node	*list_node;
// 	t_node	**lst;
// 	t_node	*list_last;
// 	//char	*str;

// 	lst = &list_node;
// 	new_node_front = ft_lstnew(content_front_node);
// 	new_node_back = ft_lstnew(content_back_node);
// 	list_node = ft_lstnew(content_node);
// 	ft_lstadd_front(lst, new_node_front);
// 	printf("content of add_front
//is %s \n", (char *)(*lst) -> content);
// 	ft_lstadd_back(lst, new_node_back);
// 	printf("content of add_back
//is %s \n", (char *)(*lst) -> next -> next -> content);
// 	list_last = ft_lstlast(*lst);
// 	printf("content of last is %s \n", (char *)(list_last) -> content);
// 	return (0);
// }
