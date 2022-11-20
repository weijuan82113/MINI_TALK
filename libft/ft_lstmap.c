/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:39:10 by wchen             #+#    #+#             */
/*   Updated: 2022/10/30 23:23:24 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_lstmap(t_node *lst, void *(*f)(void *), void (*del)(void *))
{
	t_node	*new_node;
	t_node	*ret_lst;

	if (!lst || !f)
		return (NULL);
	ret_lst = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst -> content));
		if (!new_node)
		{
			ft_lstclear(&ret_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&ret_lst, new_node);
		lst = lst -> next;
	}
	return (ret_lst);
}

// #include <stdio.h>
// static void	*f(void *content)
// {
// 	printf("content is %s \n",(char *) content);
// 	return (content);
// }

// int main (void)
// {
// 	char 	*content_node = ft_strdup("abcd");
// 	char 	*content_new_node_1 = ft_strdup("efgh");
// 	char 	*content_new_node_2 = ft_strdup("ijklm");
// 	t_node	*list_node;
// 	t_node	*list_new_node1;
// 	t_node	*list_new_node2;
// 	t_node	**list;
// 	t_node	*ret_lst;

// 	list = &list_node;
// 	list_node = ft_lstnew(content_node);
// 	printf("content of lst is %s \n", (char *)(*list) -> content);
// 	list_new_node1 = ft_lstnew(content_new_node_1);
// 	list_new_node2 = ft_lstnew(content_new_node_2);
// 	ft_lstadd_back(list, list_new_node1);
// 	ft_lstadd_back(list, list_new_node2);
// 	ret_lst = ft_lstmap(*list, f, free);
// 	printf("content of ret_lst is %s \n", (char *)ret_lst -> content);
// 	return (0);
// }
