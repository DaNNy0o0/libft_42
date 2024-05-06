/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:27:15 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/04/23 11:22:21 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

// int main(void)
// {
// 	char str[] = "12345";
// 	int i = 0;
// 	int str_len = ft_strlen(str);

// 	ft_bzero(str, str_len);

// 	while (i++ < str_len)
// 	{
// 		printf("%c", str[str_len]);
// 	}
// }

/*

! *************** FT_BZERO ***************

* Descripcion: Establece en 0 un bloque de memoria

*/