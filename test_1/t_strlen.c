/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:17:50 by maboulkh          #+#    #+#             */
/*   Updated: 2022/10/28 15:29:05 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*str;

	str = NULL;
	// printf("%zu\n", strlen(str));
	// printf("%zu\n", ft_strlen(str));

	str = "khdsf fheiuhf hefcdisuf";
	printf("%zu\n", ft_strlen(str));
	if (strlen(str) == ft_strlen(str))
		printf("there is no differnece\n");

	str = "";
	printf("%zu\n", ft_strlen(str));
	if (strlen(str) == ft_strlen(str))
		printf("there is no differnece\n");

	return (0);
}
