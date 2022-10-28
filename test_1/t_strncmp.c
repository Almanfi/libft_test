/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strncmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:05:15 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/28 16:36:21 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*str;
	char	*str2;
	int error;

	error = 0;
//segfault
	// ft_strncmp(NULL, NULL, 1);
	// strncmp(NULL, NULL, 1);

	// ft_strncmp(NULL, "dummy", 1);
	// strncmp(NULL, "dummy", 1);

	// ft_strncmp("dummy", NULL, 1);
	// strncmp("dummy", NULL, 1);

	str = NULL;
	str2 = NULL;
	printf("%d\n\n", ft_strncmp(str, str2, 0));
	if (strncmp(str, str2, 0) != ft_strncmp(str, str2, 0))
		error++;


	str = "";
	str2 = "";
	printf("%d\n\n", strncmp(str, str2, strlen(str)));
	printf("%d\n\n", ft_strncmp(str, str2, strlen(str)));

	printf("%d\n\n", strncmp(str, str2, 1));
	printf("%d\n\n", ft_strncmp(str, str2, 1));

	printf("%d\n\n", strncmp(str, str2, 2));
	printf("%d\n\n", ft_strncmp(str, str2, 2));


	str = "Khdsf fheiuhf Kefcdisuf";
	str2 = "Khdsf";
	printf("%d\n\n", ft_strncmp(str, str2, strlen(str)));
	if (strncmp(str, str2, strlen(str)) != ft_strncmp(str, str2, strlen(str)))
		error++;

	printf("%d\n\n", ft_strncmp(str, str2, strlen(str2)));
	if (strncmp(str, str2, strlen(str2)) != ft_strncmp(str, str2, strlen(str2)))
		error++;

	printf("%d\n\n", ft_strncmp(str, str2, SIZE_MAX));
	if (strncmp(str, str2, SIZE_MAX) != ft_strncmp(str, str2, SIZE_MAX))
		error++;


	str = "Khdsf fheiuhf Kefcdisuf";
	str2 = "";
	printf("%d\n\n", ft_strncmp(str, str2, strlen(str)));
	if (strncmp(str, str2, strlen(str)) != ft_strncmp(str, str2, strlen(str)))
		error++;

	printf("%d\n\n", ft_strncmp(str, str2, strlen(str2)));
	if (strncmp(str, str2, strlen(str2)) != ft_strncmp(str, str2, strlen(str2)))
		error++;

	printf("%d\n\n", ft_strncmp(str, str2, SIZE_MAX));
	if (strncmp(str, str2, SIZE_MAX) != ft_strncmp(str, str2, SIZE_MAX))
		error++;


	str = "";
	str2 = "Khdsf fheiuhf Kefcdisuf";
	printf("%d\n\n", ft_strncmp(str, str2, strlen(str)));
	if (strncmp(str, str2, strlen(str)) != ft_strncmp(str, str2, strlen(str)))
		error++;

	printf("%d\n\n", ft_strncmp(str, str2, strlen(str2)));
	if (strncmp(str, str2, strlen(str2)) != ft_strncmp(str, str2, strlen(str2)))
		error++;

	printf("%d\n\n", ft_strncmp(str, str2, SIZE_MAX));
	if (strncmp(str, str2, SIZE_MAX) != ft_strncmp(str, str2, SIZE_MAX))
		error++;


	str = "A";
	str2 = "A";
	printf("%d\n\n", ft_strncmp(str, str2, strlen(str)));
	if (strncmp(str, str2, strlen(str)) != ft_strncmp(str, str2, strlen(str)))
		error++;	

	str = "A";
	str2 = "B";
	printf("%d\n\n", ft_strncmp(str, str2, strlen(str)));
	if (strncmp(str, str2, strlen(str)) != ft_strncmp(str, str2, strlen(str)))
		error++;	

	if (error > 0)
		printf("there is an error\n");
	else
		printf("no error\n");

	return (0);
}
