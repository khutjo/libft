/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 08:47:25 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/17 17:40:28 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int		index;
	int		index1;

	index = 0;
	index1 = 0;
	while (dest[index1])
	{
		index1++;
	}
	dest[index1] = 'a';
	while (src[index])
	{
		dest[index1] = src[index];
		index1++;
		index++;
	}
	dest[index1] = '\0';
	return (dest);
}
