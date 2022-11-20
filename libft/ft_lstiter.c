/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:39:10 by wchen             #+#    #+#             */
/*   Updated: 2022/10/30 23:23:24 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_node *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
//#include <stdio.h>
// static void	f(void *content)
// {
// 	printf("content is %s \n",(char *) content);
// }

// int main (void)
// {
// 	char 	*content_node = "abcd";
// 	char 	*content_new_node_1 = "efgh";
// 	char 	*content_new_node_2 = "ijklm";
// 	t_node	*list_node;
// 	t_node	*list_new_node1;
// 	t_node	*list_new_node2;
// 	t_node	**list;

// 	list = &list_node;
// 	list_node = ft_lstnew(content_node);
// 	printf("content of lst is %s \n", (char *)(*list) -> content);
// 	list_new_node1 = ft_lstnew(content_new_node_1);
// 	list_new_node2 = ft_lstnew(content_new_node_2);
// 	ft_lstadd_back(list, list_new_node1);
// 	printf("content of lst after_add_back1
//is %s \n", (char *)(*list) -> content);
// 	ft_lstadd_back(list, list_new_node2);
// 	printf("content of lst after_add_back2
//is %s \n", (char *)(*list) -> content);
// 	ft_lstiter(*list, f);
// 	return (0);
// }
