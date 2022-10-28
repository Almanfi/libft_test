/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_lstdelone.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 23:32:42 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/24 00:22:23 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// test > void ft_lstdelone(t_list *lst, void (*del)(void*));
void	prlst(t_list *lst);

int main()
{
	t_list	*l1;
	t_list	*l2;
	t_list	*l3;
	t_list	*ptr;
	
	ptr = NULL;
	l1 = ft_lstnew(ft_strdup("hello"));
	l2 = ft_lstnew(ft_strdup("world"));
	l3 = ft_lstnew(ft_strdup(" !"));
	ft_lstadd_front(&ptr, l3);
	ft_lstadd_front(&ptr, l2);
	ft_lstadd_front(&ptr, l1);

	print("%d\n"sizeof(*lst))

	prlst(ptr);

	ft_lstdelone(l2, free);
	prlst(ptr);
}
