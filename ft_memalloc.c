/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 09:48:16 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/30 13:32:11 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*fresh;

	fresh = 0;
	if ((fresh = (char *)malloc(sizeof(char) * size)))
			ft_bzero(fresh, size);
	return (fresh);
}
