/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_lstiter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 03:20:24 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/24 05:32:56 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// test > void ft_lstiter(t_list *lst, void (*f)(void *));
void	prlst(t_list *lst);

void	fn(void *content)
{
	ft_strlcpy(((char *)content), "ALTERED", 8);
}

int	main(void)
{
	t_list	*l1;
	t_list	*l2;
	t_list	*l3;
	t_list	*ptr;

	ptr = NULL;
	l1 = ft_lstnew(ft_strdup("hello"));
	l2 = ft_lstnew(ft_strdup("world"));
	l3 = ft_lstnew(ft_strdup(" !"));
	ft_lstadd_back(&ptr, l1);
	ft_lstadd_back(&ptr, l2);
	ft_lstadd_back(&ptr, l3);
	prlst(ptr);
	ft_lstiter(NULL, NULL);
	ft_lstiter(NULL, fn);
	ft_lstiter(ptr, NULL);
	ft_lstiter(ptr, fn);
	prlst(ptr);
	system("leaks a.out");
}
