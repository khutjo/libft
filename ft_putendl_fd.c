/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 14:21:50 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/24 14:45:01 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int index;

	if (!s)
		return ;
	index = -1;
	while (s[++index] != '\0')
		ft_putchar_fd((char)s[index], fd);
	ft_putchar_fd('\n', fd);
}
