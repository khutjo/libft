/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:45:04 by kmaputla          #+#    #+#             */
/*   Updated: 2018/06/14 16:58:58 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*hold;
	int		index;

	if (!s)
		return (NULL);
	hold = 0;
	index = -1;
	if ((hold = ft_strnew(ft_strlen(s))))
	{
		while (s[++index] != '\0')
			hold[index] = f(index, s[index]);
	}
	return (hold);
}
