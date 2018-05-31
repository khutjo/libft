/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:51:36 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/31 13:30:07 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = NULL;
	if ((new = (t_list *)malloc(sizeof(t_list))))
	{
		if (content == NULL || content_size == 0)
		{
			new->content = 0;
			new->content_size = 0;
		}
		else if ((new->content = (void *)malloc(content_size)))
		{
			ft_memcpy(new->content, content, content_size);
			new->content_size = content_size;
		}
		new->next = NULL;
	}
	return (new);
}
/*
int main()
{
	char *data = "hello, i'm a data";
	t_list *l = ft_lstnew(((void *)0), 0);//strlen(data) + 1);
	
	printf("%d", 0x0);
	return (0);
}*/
