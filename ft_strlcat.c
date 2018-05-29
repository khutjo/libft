/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 12:33:28 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/29 17:50:52 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	int		count;

	count = 0;
	index = 0;
	while (dst[index] != '\0' && index < dstsize)
	{
		index++;
	}
	while (src[count] != '\0')
	{
		if (index < dstsize)
		{
			dst[index] = src[count];
			dst[1 + index] = '\0';
		}
		index++;
		count++;
	}
	if (index == dstsize)
		dst[--index] = '\0';
	return (index);
}
