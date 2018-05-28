/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:19:07 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/24 11:28:50 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s)
{
	int index;

	index = -1;
	if (s != 0)
		while (s[++index] != '\0')
			write(1, &s[index], 1);
}
