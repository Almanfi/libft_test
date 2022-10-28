/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 04:44:30 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/23 06:57:01 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	prlst(t_list *lst);

int	main(void)
{
	t_list	*ps0;
	t_list	*ps1;
	t_list	*ps2;
	t_list	*ptr;

	ps0 = malloc(sizeof(t_list));
	ps1 = malloc(sizeof(t_list));
	ps2 = malloc(sizeof(t_list));
	ps0->content = (char *)strdup("hello");
	ps1->content = (char *)strdup("hey");
	ps2->content = (char *)strdup("hi");
	ps0->next = ps1;
	ps1->next = ps2;
	ps2->next = NULL;
	ptr = ps0;
	ft_lstclear(&ptr, NULL);
	printf("++++++++++++++++++++++++++++++++\n");
	prlst(ptr);
	// while (ptr)
	// {
	// 	printf("%s\n", ptr->content);
	// 	ptr = ptr->next;
	// }
	return (0);
}