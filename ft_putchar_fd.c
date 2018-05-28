/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:08:59 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/24 14:44:11 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	int	c_u[2];

	ft_memcpy((char*)c_u, "\u00F8", 2);
	if (ft_isascii(c))
		write(fd, &c, 1);
	else
	{
		c_u[1] = c;
		write(fd, c_u, 2);
	}
}
