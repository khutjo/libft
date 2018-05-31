/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 17:29:54 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/31 14:19:11 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!new)
		return ;
	if (!(*alst))
		(*alst) = new;
	else
		new->next = (*alst);
		*alst = new;
}
/*
int main()
{
	t_list *l = ft_lstnew(strdup("nyacat"), 8);
	t_list *n = ft_lstnew(strdup("OK"), 3);

	ft_lstadd(&l, n);
	if (l == n)
		printf("1 %s, %s\n", l->content, n->content);
	if (!strcmp(l->content, "OK"))
		printf("2 %s, %s\n", n->content, n->content);
	if (l->content_size == 3)
		printf("3 %s, %s\n", l->content, n->content);
	return (0);
}*/
