/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 08:42:57 by kmaputla          #+#    #+#             */
/*   Updated: 2018/06/01 11:01:32 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	check(char *str)
{
	int		i;
	int		sk;
	char	*skip;

	i = -1;
	sk = 0;
	skip = "\t\v\f\r\n 0";
	while (++i < 7)
		if (str[sk] == skip[i])
		{
			sk++;
			i = -1;
		}
	return (sk);
}

int			ft_atoi(const char *str)
{
	int index;
	int num;
	int sign;
	int exit_kick;

	num = 0;
	sign = 0;
	exit_kick = 0;
	index = check((char *)str);
	if (str[index] == '-' || str[index] == '+')
		sign = str[index++];
	while (str[index] >= '0' && str[index] <= '9')
	{
		num *= 10;
		num += str[index] - '0';
		index++;
		exit_kick++;
	}
	if (sign == '-')
		num *= -1;
	if (exit_kick > 10 && (sign == 0 || sign == '+'))
		num = -1;
	else if (exit_kick > 10)
		num = 0;
	return (num);
}
