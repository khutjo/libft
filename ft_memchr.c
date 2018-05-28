/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 08:45:19 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/19 13:31:00 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;
	char	*hold;

	hold = (char *)s;
	index = 0;
	while ((hold[index] != c && hold[index] != '\0') && index < n)
		index++;
	if (hold[index] == c)
		return (&hold[index]);
	return (0);
}
