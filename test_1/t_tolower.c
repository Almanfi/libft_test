/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_tolower.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:12:19 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/28 15:16:09 by maboulkh         ###   ########.fr       */
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
	if (!comp_int(c, d, tolower, ft_tolower))
		printf("there is no differnece\n");

	c = INT_MAX;
	d = c + 1000;
	if (!comp_int(c, d, tolower, ft_tolower))
		printf("there is no differnece\n");
	// tolower(NULL);
	ft_tolower(NULL);
	return (0);
}
