/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_lstmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 03:45:38 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/24 05:55:33 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// test > t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	prlst(t_list *lst);

void	*fn(void *content)
{
	content = ft_strdup("hey");
	return content;
}

int	main(void)
{
	t_list	*l1;
	t_list	*l2;
	t_list	*l3;
	t_list	*ptr;
	t_list	*ptr2;

	ptr = NULL;
	l1 = ft_lstnew(ft_strdup("hello"));
	l2 = ft_lstnew(ft_strdup("world"));
	l3 = ft_lstnew(ft_strdup(" !"));
	ft_lstadd_back(&ptr, l1);
	ft_lstadd_back(&ptr, l2);
	ft_lstadd_back(&ptr, l3);
	prlst(ptr);
	ptr2 = ft_lstmap(NULL, fn, free);
	ptr2 = ft_lstmap(ptr, NULL, free);
	ptr2 = ft_lstmap(ptr, fn, NULL);
	ptr2 = ft_lstmap(NULL, NULL, free);
	ptr2 = ft_lstmap(NULL, fn, NULL);
	ptr2 = ft_lstmap(ptr, NULL, NULL);
	ptr2 = ft_lstmap(NULL, NULL, NULL);
	ptr2 = ft_lstmap(ptr, fn, free);
	prlst(ptr2);
	prlst(ptr);
}
