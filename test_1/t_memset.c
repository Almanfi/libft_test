/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_memset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:39:13 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/28 17:07:34 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*a;
	char	*b;
	char	c;
	int		n;
	int		error;

	error = 0;
	a = malloc(10);
	b = malloc(10);
	// segfault
	//  ft_memset(NULL, 0, 1);
	//  memset(NULL, 0, 1);

	// ft_memset(a, 1, -1);
	// memset(b, 1, -1);

	// ft_memset(a, 1, INT_MAX / 2);
	// memset(b, 1, INT_MAX / 2);

	ft_memset(a, 1, 1000000);
	memset(b, 1, 1000000);

	ft_memset(NULL, 0, 0);
	memset(NULL, 0, 0);


	n = 0;
	ft_memset(a, 1, n);
	memset(b, 1, n);
	while (--n >= 0)
		if (a[n] != b[n])
			error++;


	n = 10;
	ft_memset(a, 1265, n);
	memset(b, 1265, n);
	while (--n >= 0)
		if (a[n] != b[n])
			error++;


	n = 10;
	ft_memset(a, 0, n);
	memset(b, 0, n);
	while (--n >= 0)
		if (a[n] != b[n])
			error++;

	if (error > 0)
		printf("there is an error\n");
	else
		printf("no error\n");

	return (0);
}