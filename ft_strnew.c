/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 10:23:50 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/23 06:56:11 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*new_str;
	size_t	index;

	index = -1;
	if (!(new_str = (char *)malloc(sizeof(char) * ++size)))
	{
		new_str = 0;
		return (new_str);
	}
	while (++index < size)
		new_str[index] = '\0';
	return (new_str);
}
