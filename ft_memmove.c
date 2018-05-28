/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 08:46:05 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/28 11:19:00 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			index;
	unsigned char	*c_src;
	unsigned char	*c_dst;
	unsigned char	hold;

	index = -1;
	hold = 0;
	c_dst = (unsigned char *)dst;
	c_src = (unsigned char *)src;
	if (&dst[0] > &src[0])
	{
		while (len > 0)
		{
			len--;
			hold = c_dst[len];
			c_dst[len] = c_src[len];
		}
	}
	else
		while (++index < len)
			c_dst[index] = c_src[index];
	return (dst);
}
