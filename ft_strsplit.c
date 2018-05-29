/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 12:03:37 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/29 17:08:10 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static	int		dlen(char *a, char c)
{
	int count;
	int index;

	count = 0;
	index = 0;
	while (a[index] == c && a[index])
		index++;
	while (a[index])
	{
		if (a[index] != c)
			count++;
		while (a[index] != c && a[index] != '\0')
			index++;
		while (a[index] == c && a[index] != '\0')
			index++;
	}
	return (count);
}

static	char	**make(char *s, char c)
{
	int		len;
	int		count;
	int		index;
	int		keep;
	char	**hold;

	index = 0;
	count = 0;
	len = dlen(s, c);
	if (len == 0)
		return (0);
	while (s[index] == c && s[index])
		index++;
	if ((hold = (char **)malloc(sizeof(char **) * (1 + len))))
	{
		hold[len] = NULL;
		while (s[index] != '\0')
		{
			while (s[++index] != c && s[index] != '\0')
				keep++;
			if (!(hold[count] = (char *)malloc(sizeof(char*) *( 1 + keep))))
				return (0);
			hold[count][keep] = '\0';
			keep = 0;
			while (s[index] == c && s[index] != '\0')
				index++;
			count++;
		}
	}
	return (hold);
}

char **ft_strsplit(char *s, char c)
{
	char	**hold;
	int		index;
	int		keep;
	int		count;
	
	index = 0;
	keep = 0;
	count = 0;
	hold = NULL;
	if (!s)
		return (hold);
	hold = make(s, c);
	if (hold == NULL)
		return (hold);
	while (s[index] == c && s[index] != '\0')
		index++;
	while (s[index] != '\0')
	{
		while (s[index] != c && s[index] != '\0')
		{
			hold[keep][count] = s[index];
			index++;
			count++;
		}
		hold[keep][count] = '\0';
		count = 0;
		keep++;
		while (s[index] == c && s[index] != '\0')
			index++;
	}
	return(hold);
}
