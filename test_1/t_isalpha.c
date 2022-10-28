/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isalpha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:51:09 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/28 14:53:42 by maboulkh         ###   ########.fr       */
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
	if (!comp_int(c, d, isalpha, ft_isalpha))
		printf("there is no differnece\n");

	c = INT_MAX;
	d = c + 1000;
	if (!comp_int(c, d, isalpha, ft_isalpha))
		printf("there is no differnece\n");
	// isalpha(NULL);
	// ft_isalpha(NULL);
	return (0);
}
