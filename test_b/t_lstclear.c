/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_lstclear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 23:54:23 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/24 04:41:40 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// test > void ft_lstclear(t_list **lst, void (*del)(void*));
void	prlst(t_list *lst);

int main()
{
	t_list	*l1;
	t_list	*l2;
	t_list	*l3;
	t_list	*ptr;

	ptr = NULL;
	l1 = ft_lstnew(ft_strdup("1"));
	l2 = ft_lstnew(ft_strdup("2"));
	l3 = ft_lstnew(ft_strdup("3"));
	ft_lstadd_back(&ptr, l1);
	ft_lstadd_back(&ptr, l2);
	ft_lstadd_back(&ptr, l3);
	prlst(l1);
	// ft_lstclear(&(l1->next), NULL);
	// ft_lstclear(NULL, NULL);
	// ft_lstclear(NULL, free);
	ft_lstclear(&(l1->next), free);
	prlst(l1);
}
