/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 17:17:10 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/31 15:08:41 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
void	ft_lstdel(t_list **alst, void (del)(void *, size_t))
{
	t_list *hold;

	hold = (*alst);
	if (hold != NULL)
	{
		*alst = (*alst)->next;
		ft_lstdel(alst, del); 
		del(hold->content, hold->content_size);
		free(hold);
	}
	alst = NULL;
}
/*

int main()
{
	t_list *l = ft_lstnew(strdup("nyancat"), 8);

	l->next = ft_lstnew(strdup("#TEST#"), 7);
	ft_lstdel(&l, ft_lstdelone);

	if (!l)
		printf("L");
	else printf("L");
	return (0);
}*/
