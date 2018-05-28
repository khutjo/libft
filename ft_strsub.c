/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 12:03:12 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/24 14:32:40 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*hold;
	size_t	index;

	hold = 0;
	index = len;
	if (s == 0)
		return (0);
	if ((hold = (char *)malloc(sizeof(char) * 1 + index)))
	{
		index = 0;
		while (s[start] != '\0')
		{
			hold[index] = s[start];
			index++;
			start++;
		}
		hold[len] = '\0';
	}
	return (hold);
}
