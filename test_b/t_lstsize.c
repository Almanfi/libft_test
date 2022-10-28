/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_lstsize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 07:55:56 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/23 22:45:03 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// test > int ft_lstsize(t_list *lst);
void	prlst(t_list *lst);
// if new == NULL

int main()
{
	t_list *l1;
	t_list *l2;

	l1 = ft_lstnew("hello");
	l2 = ft_lstnew("world");
	ft_lstadd_front(&l1, l2);
	ft_lstadd_front(&l2, l1);

	printf("%d\n", ft_lstsize(l2));
}