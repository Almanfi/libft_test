/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isprint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:07:11 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/28 15:10:02 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	comp_int(int a, int b, int (*f)(int), int (*ft)(int));

int	main(void)
{
	int	c;
	int	d;

	c = -300;
	d = c + 1000;
	if (!comp_int(c, d, isprint, ft_isprint))
		printf("there is no differnece\n");

	c = INT_MAX;
	d = c + 1000;
	if (!comp_int(c, d, isprint, ft_isprint))
		printf("there is no differnece\n");
	// isprint(NULL);
	// ft_isprint(NULL);
	return (0);
}
