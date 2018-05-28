/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:13:54 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/28 11:08:38 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putchar(char c)
{
	int c_u[2];

	ft_memcpy((char*)c_u, "\u00F8", 2);
	if (ft_isascii(c))
		write(1, &c, 1);
	else
	{
		c_u[1] = c;
		write(1, c_u, 2);
	}
}
