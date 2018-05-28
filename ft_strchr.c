/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 08:47:47 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/20 14:40:45 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		index;
	char	*hold;
	char	c_c;

	index = 0;
	hold = 0;
	c_c = (char)c;
	while (s[index] != '\0' && s[index] != c_c)
		index++;
	if (s[index] == c_c)
		hold = (char *)&s[index];
	return (hold);
}
