/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 17:41:18 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/30 17:52:20 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_lsit *ft_lstmap(t_list *lst, t_list *(f)(t_list *elem))
{
	t_list	head;
	t_list	new;
	int		exit_t;

	exit_t = 1;
	while (lst != NULL && exit_t)
	{
		if ((new = (t_list *)malloc(sizeof(t_list))))
		{
			new = f(lst);
			lst = lst->next;

		
