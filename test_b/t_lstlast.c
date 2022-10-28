/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_lstlast.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:44:07 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/23 23:09:15 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// test > t_list *ft_lstlast(t_list *lst);
void	prlst(t_list *lst);
// if new == NULL

int main()
{
	t_list *l1;
	t_list *l2;
	t_list *ptr;

	ptr = NULL;
	l1 = ft_lstnew("hello");
	l2 = ft_lstnew("world");
	ft_lstadd_front(&l1, l2);
	// ft_lstadd_front(&l2, l1);
	// ft_lstadd_front(&ptr, l2);
	// ft_lstadd_front(&ptr, l1);

	prlst(l1);
	// prlst(l2);
	prlst(ptr);
}