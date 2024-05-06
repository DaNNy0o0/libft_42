/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:10:26 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/04/11 18:45:15 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
}

// int main()
// {
// 		ft_putstr_fd("abcde", 1);
// }

/*
! *************** FT_PUTSTR_FD ***************

* Descripcion: Escribe una cadena en el file descriptor

*/