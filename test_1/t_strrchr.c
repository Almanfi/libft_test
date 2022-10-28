/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:30:04 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/28 16:01:27 by maboulkh         ###   ########.fr       */
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
	// ft_strrchr(NULL, 0);
	// strrchr(NULL, 0);


	str = "";
	c = 'a';
	printf("c = %c -in- str = %s %s\n\n", c, str, strrchr(str, c));
	printf("c = %c -in- str = %s %s\n\n", c, str, ft_strrchr(str, c));

	str = "Khdsf fheiuhf Kefcdisuf";
	c = 'K';
	printf("c = %c -in- str = %s \nres is\t\t %s\n\n", c, str, ft_strrchr(str, c));
	if (strrchr(str, c) != ft_strrchr(str, c))
		error++;

	str = "khdsf fheiuhf hefcdisuf";
	c = 0;
	printf("c = %c -in- str = %s \nres is\t\t %s\n\n", c, str, ft_strrchr(str, c));
	if (strrchr(str, c) != ft_strrchr(str, c))
		error++;	

	str = "";
	c = 0;
	printf("c = %c -in- str = %s \nres is\t\t %s\n\n", c, str, ft_strrchr(str, c));
	if (strrchr(str, c) != ft_strrchr(str, c))
		error++;	

	str = "A";
	c = 'A';
	printf("c = %c -in- str = %s \nres is\t\t %s\n\n", c, str, ft_strrchr(str, c));
	if (strrchr(str, c) != ft_strrchr(str, c))
		error++;	

	if (error > 0)
		printf("there is an error\n");
	else
		printf("no error\n");

	return (0);
}
