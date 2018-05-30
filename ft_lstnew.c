/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:51:36 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/30 17:16:32 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

t_list	*ft_lstnew(void *contents, size_t content_size)
{
	t_list *new;

	new = NULL;
	if ((new = (t_list *)malloc(sizeof(t_list *))))
	{
		new->content = content;
		new->content_size = content_size;
		new->next = NULL;
	}
	return (new);
}
