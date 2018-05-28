/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:08:39 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/24 11:44:41 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		index;
	int		index2;
	char	*hold;

	hold = 0;
	if (s1 == 0)
		return ((char *)s2);
	if (s2 == 0)
		return ((char *)s1);
	index = ft_strlen(s1);
	index2 = ft_strlen(s2);
	if ((hold = (char *)malloc(sizeof(char) * 1 + (index + index2))))
	{
		hold = ft_strcpy(hold, s1);
		hold = ft_strcat(hold, s2);
	}
	return (hold);
}
