/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 17:41:18 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/31 15:50:47 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *read;
	t_list *new;
	t_list *hold;

	if (!lst)
		return (NULL);
	read = lst->next;
	hold = NULL;
	new = NULL;
	if(read != NULL)
	{
		new = (t_list *)malloc(sizeof(t_list));
		hold = ft_lstmap(read, f);
		new = f(lst);
		new->next = hold;
	}
	return (new);
}
int main()
{
	t_list *l = lstnew(strdup(" 1 2 3 "), 8);
	t_list *ret;

	l->next = lstnew(strdup("ss"), 3);
	l->next->next = lstnew(strdup("-_-"), 4);
	ret = ft_lstmap(l, lstmap_f);
	if (!strcmp(ret->content, "OK !"))
		printf(
	if (!strcmp(ret->next->content, "OK !"))
	
	if (!strcmp(ret->next->next->content, "OK !"))
	  
	if (!strcmp(l->content, " 1 2 3 "))

	if (!strcmp(l->next->content, "ss"))

	if (!strcmp(l->next->next->content, "-_-"))

	return (0);
}
