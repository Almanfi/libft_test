/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strchr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:29:37 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/28 15:58:57 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*str;
	char	c;
	int error;

	error = 0;
//segfault
	// ft_strchr(NULL, 0);
	// strchr(NULL, 0);


	str = "";
	c = 'a';
	printf("c = %c -in- str = %s %s\n\n", c, str, strchr(str, c));
	printf("c = %c -in- str = %s %s\n\n", c, str, ft_strchr(str, c));

	str = "Khdsf fheiuhf Kefcdisuf";
	c = 'K';
	printf("c = %c -in- str = %s \nres is\t\t %s\n\n", c, str, ft_strchr(str, c));
	if (strchr(str, c) != ft_strchr(str, c))
		error++;

	str = "khdsf fheiuhf hefcdisuf";
	c = 0;
	printf("c = %c -in- str = %s \nres is\t\t %s\n\n", c, str, ft_strchr(str, c));
	if (strchr(str, c) != ft_strchr(str, c))
		error++;	

	str = "";
	c = 0;
	printf("c = %c -in- str = %s \nres is\t\t %s\n\n", c, str, ft_strchr(str, c));
	if (strchr(str, c) != ft_strchr(str, c))
		error++;	

	str = "A";
	c = 'A';
	printf("c = %c -in- str = %s \nres is\t\t %s\n\n", c, str, ft_strchr(str, c));
	if (strchr(str, c) != ft_strchr(str, c))
		error++;	

	if (error > 0)
		printf("there is an error\n");
	else
		printf("no error\n");

	return (0);
}
