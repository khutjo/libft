/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 08:46:19 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/25 10:49:30 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*hold;
	unsigned char	c_c;
	size_t			index;

	c_c = (unsigned char)c;
	hold = (unsigned char *)s;
	index = -1;
	while (++index < len)
		hold[index] = c_c;
	return (s);
}
