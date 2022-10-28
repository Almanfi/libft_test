/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_lstnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 06:12:48 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/23 06:43:30 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	t_list	*ps0;
	t_list	*ps1;
	t_list	*ps2;
	t_list	*ps3;
	int		n;
	char	c;

	n = 2;
	c = 'c';
	ps0 = ft_lstnew((char *)strdup("hello"));
	ps1 = ft_lstnew(&n);
	ps2 = ft_lstnew(&c);
	ps3 = ft_lstnew(NULL);
	printf("%s\n", ps0->content);
	printf("%d\n", *(int *)(ps1->content));
	printf("%c\n", *(char *)(ps2->content));
	ps3->content = &c;
	printf("%c\n", *(char *)(ps3->content));
	return (0);
}
