/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_bzero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:10:38 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/28 17:21:16 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*a;
	char	*b;
	int		n;
	int		error;

	error = 0;
	a = malloc(10);
	b = malloc(10);
	// segfault
	//  ft_bzero(NULL, 1);
	//  bzero(NULL, 1);

	// ft_bzero(a, -1);
	// bzero(b, -1);

	// ft_bzero(a, INT_MAX / 2);
	// bzero(b, INT_MAX / 2);

	ft_bzero(a, 1000000);
	bzero(b, 1000000);


	n = 1000000;
	ft_bzero(a, n);
	bzero(b, n);
	while (--n >= 0)
		if (a[n] != b[n])
			error++;

	n = 0;
	ft_bzero(a, n);
	bzero(b, n);
	while (--n >= 0)
		if (a[n] != b[n])
			error++;


	n = 10;
	ft_bzero(a, n);
	bzero(b, n);
	while (--n >= 0)
		if (a[n] != b[n])
			error++;


	if (error > 0)
		printf("there is an error\n");
	else
		printf("no error\n");

	return (0);
}