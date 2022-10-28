/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:27:41 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/28 14:38:53 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	comp_int(int a, int b, int (*f)(int), int (*ft)(int))
{
	int	error;

	error = 0;
	while (a++ <= b)
	{
		if (ft(a) != f(a))
		{
			error++;
			printf("there is a deffirence in c = %d\n", a);
		}
	}
	return (error);
}