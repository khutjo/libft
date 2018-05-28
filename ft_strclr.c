/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 10:39:13 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/23 11:17:14 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *s)
{
	int index;

	if (s == 0)
		return ;
	index = -1;
	while (s[++index] != '\0')
		s[index] = '\0';
}