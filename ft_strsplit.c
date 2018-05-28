/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 07:46:47 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/28 10:24:55 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
#include <stdlib.h>
#include <stdio.h>

static	int	dlen(const char *s, char c)
{
	int index;
	int count;
	int state;

	index = 0;
	count = 0;
	state = 0;
	while (s[index] == c && s[index] != '\0')
		index++;
	if (s[index] == '\0')
		return (1);
	while (s[index] != '\0')
	{
		if (s[index] != c)
			count++;
		while (s[index] != c && s[index] != '\0')
			index++;
		while (s[index] == c && s[index] != '\0')
			index++;
	}
	return (count);
}

static	int	*slen(char *s, char c)
{

	int index;
	int count;
	int keep;
	int *len;

	len = 0;
	keep = 1;
	index = 0;
	count = 0;
	while (s[index] == c && s[index] != '\0')
		index++;
	len = (int *)malloc(sizeof(int) *dlen(s, c)
	len[0] = dlen(s, c);
	while (s[index] != '\0' && len[0] != 0)
	{
		if (s[index] == c && count >= 0)
		{
			len[keep] = count;
			printf("%d", len[keep]);
			keep++;
			count = -1;
		}
		if (s[index] != c)
			count++;
		index++;
	}
	return (len);
}
/*
static	char arcpy(char **hold, char *s, char c)
{
	int inedex;
	int keep;
	int seg;

	seg = 0;
	keep = 0;
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] != c && keep >= 0)
		{
			hold[seg][keep] = s[index];
			keep++;
		}
		if (s[index] == c && keep > 
		 index++;*/


char		**ft_strsplit(char *s, char c)
{
	char	**hold;
	int		*len;
	int		index;

	hold = NULL;
	index = 0;
	if (!s)
		return (hold);
	len = slen(s, c);
	if (len[0] == 0)
		return (hold);
	if ((hold = (char **)malloc(sizeof(char *) * len[0])))
	{
		while (index < len[0])
		{
			hold[index] = (char *)malloc(sizeof(char) * len[1 + index]);
			index++;
		}
	}
	return (NULL);
}
