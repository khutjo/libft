/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 09:48:16 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/24 09:11:05 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*fresh;
	size_t	index;

	index = -1;
	fresh = 0;
	if ((fresh = (char *)malloc(sizeof(char) * size)))
		while (++index < size)
			fresh[index] = '\0';
	return (fresh);
}
