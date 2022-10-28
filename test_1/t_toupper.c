/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_toupper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:11:57 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/28 15:15:26 by maboulkh         ###   ########.fr       */
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
	if (!comp_int(c, d, toupper, ft_toupper))
		printf("there is no differnece\n");

	c = INT_MAX;
	d = c + 1000;
	if (!comp_int(c, d, toupper, ft_toupper))
		printf("there is no differnece\n");
	// toupper(NULL);
	// ft_toupper(NULL);
	return (0);
}
