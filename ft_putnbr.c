/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:28:30 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/24 11:28:36 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	int		index;
	long	hold;

	hold = (long)n;
	index = 0;
	if (hold < 0)
	{
		hold *= -1;
		write(1, "-", 1);
	}
	index = hold % 10;
	hold /= 10;
	index += '0';
	if (hold > 0)
		ft_putnbr(hold);
	write(1, &index, 1);
}
