/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 12:34:58 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/31 16:06:28 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, const char *s2, size_t n)
{
	size_t			idx;
	unsigned char	*c_s1;
	unsigned char	*c_s2;

	idx = 0;
	n--;
	c_s1 = (unsigned char *)s1;
	c_s2 = (unsigned char *)s2;
	while (c_s1[idx] == c_s2[idx] && idx < n &&\
			c_s1[idx] != '\0' && c_s2[idx] != '\0')
		idx++;
	idx = c_s1[idx] - c_s2[idx];
	return (idx);
}
