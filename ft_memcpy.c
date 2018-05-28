/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 08:45:54 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/25 13:42:39 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*c_dst;
	unsigned char	*c_src;

	index = -1;
	c_dst = (unsigned char *)dst;
	c_src = (unsigned char *)src;
	if (n == 0)
		return (dst);
	while (++index < n && c_src[index] != '\0')
		c_dst[index] = c_src[index];
	c_dst[index] = '\0';
	return (c_dst);
}
