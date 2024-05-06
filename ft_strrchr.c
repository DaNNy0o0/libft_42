/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:27:09 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/04/24 10:09:50 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "abcdefgehijk";
// 	char	c;

// 	c = 'e';
// 	printf("%s\n", ft_strrchr(str, c));
// }

/*
! *************** FT_STRRCHR ***************

* Descripcion: Busca la ultima aparicion de un caracter en una cadena

*/