/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isdigit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:49:52 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/28 14:55:37 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int comp_int(int a, int b, int (*f)(int), int (*ft)(int));

int	main(void)
{
	int	c;
	int	d;

	c = -300;
	d = c + 1000;
	if (!comp_int(c, d, isdigit, ft_isdigit))
		printf("there is no differnece\n");

	c = INT_MAX;
	d = c + 1000;
	if (!comp_int(c, d, isdigit, ft_isdigit))
		printf("there is no differnece\n");
	isdigit(NULL);
	// ft_isdigit(NULL);
	return (0);
}
