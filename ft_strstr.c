/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 12:35:36 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/22 11:09:38 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	handler(char *str1, char *str2, int hold)
{
	int index;

	index = -1;
	while (str1[hold] == str2[++index] && str1[hold])
		hold++;
	if (str2[index] == '\0')
		return (1);
	return (0);
}

char		*ft_strstr(const char *haystack, const char *needle)
{
	int		exit_kick;
	int		index;
	char	*pointer;

	index = 0;
	exit_kick = 0;
	pointer = 0;
	if (needle[index] == '\0')
		return ((char*)haystack);
	while (haystack[index] != '\0' && exit_kick == 0)
	{
		if (haystack[index] == needle[0])
		{
			if (handler((char *)haystack, (char *)needle, index))
			{
				pointer = (char *)&haystack[index];
				exit_kick = 1;
			}
		}
		index++;
	}
	return (pointer);
}
