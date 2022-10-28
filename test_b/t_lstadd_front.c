/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_lstadd_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 06:43:21 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/23 07:30:22 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// test > void ft_lstadd_front(t_list **lst, t_list *new);
void	prlst(t_list *lst);
// if new == NULL

int	main(void)
{
	t_list	*ps[4];
	int		i;

	ps[0] = ft_lstnew((char *)strdup("one"));
	ps[1] = ft_lstnew((char *)strdup("two"));
	ps[2] = ft_lstnew((char *)strdup("three"));
	ps[3] = ft_lstnew((char *)strdup("four"));
	i = 0;
	ft_lstadd_front(ps, NULL);
	while (i < sizeof(ps) / sizeof(ps[0]) - 1)
	{
		ft_lstadd_front(ps, ps[i + 1]);
		++i;
	}
	ft_lstadd_front(ps, ft_lstnew("end"));
	ft_lstadd_front(NULL, ft_lstnew("end"));
	ft_lstadd_front(ps, NULL);
	ft_lstadd_front(NULL, NULL);
	prlst(ps[0]);
	return (0);
}
