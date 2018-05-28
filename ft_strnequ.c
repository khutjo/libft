/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:59:02 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/28 10:10:13 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t index;

	index = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	if (!ft_strncmp((char *)s1, s2, n))
		return (1);
	return (0);
}
