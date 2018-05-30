/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 08:45:08 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/30 16:37:53 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	size_t			index;
	unsigned char	*c_dst;
	unsigned char	*c_src;
	unsigned char	c_c;
	unsigned char	*hold;

	index = 0;
	c_c = (unsigned char)c;
	c_src = (unsigned char *)src;
	c_dst = (unsigned char *)dst;
	while (c_src[index] != c_c && index < len)
	{
		c_dst[index] = c_src[index];
		index++;
		if (c_src[index] == c_c)
		{
			c_dst[index] = c_src[index];
			hold = &c_dst[1 + index];
		}
	}
	if (index >= len)
		return (0);
	return (hold);
}
