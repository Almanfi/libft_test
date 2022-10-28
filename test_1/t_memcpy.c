/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_memcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:58:48 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/28 20:12:11 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*a;
	char	*b;
	char	*c;
	char	*d;
	int		n;
	int		error;

	error = 0;
	a = malloc(10);
	b = malloc(10);
	c = malloc(10);
	d = malloc(10);
	memset(a, 'a', 10);
	memset(b, 'a', 10);
	memset(c, 'A', 10);
	memset(d, 'A', 10);

	ft_memcpy(NULL,NULL, 0);
	memcpy(NULL, NULL, 0);

	ft_memcpy(a, NULL, 0);
	memcpy(b, NULL, 0);

	ft_memcpy(NULL, c, 0);
	memcpy(NULL, d, 0);

	ft_memcpy(a, c, 0);
	memcpy(b, d, 0);

	ft_memcpy(NULL, NULL, 1);
	memcpy(NULL, NULL, 1);

	ft_memcpy(a, c, 1);
	memcpy(b, d, 1);

	ft_memcpy(a, c, 1000000);
	memcpy(b, d, 1000000);

// segfault-------------------------------------------------------
	// ft_memcpy(NULL, c, 1);
	// memcpy(NULL, d, 1);

	// ft_memcpy(a, NULL, 1);
	// memcpy(b, NULL, 1);

	// ft_memcpy(a, c, -1);
	// memcpy(b, d, -1);

	// ft_memcpy(a, c, INT_MAX / 2);
	// memcpy(b, d, INT_MAX / 2);
//----------------------------------------------------------------

	// n = 0;
	// ft_memcpy(a, 1, n);
	// memcpy(b, 1, n);
	// while (--n >= 0)
	// 	if (a[n] != b[n])
	// 		error++;


	// n = 10;
	// ft_memcpy(a, 1265, n);
	// memcpy(b, 1265, n);
	// while (--n >= 0)
	// 	if (a[n] != b[n])
	// 		error++;


	// n = 10;
	// ft_memcpy(a, 0, n);
	// memcpy(b, 0, n);
	// while (--n >= 0)
	// 	if (a[n] != b[n])
	// 		error++;

	// if (error > 0)
	// 	printf("there is an error\n");
	// else
	// 	printf("no error\n");

	return (0);
}