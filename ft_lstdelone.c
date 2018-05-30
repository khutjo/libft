/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:59:23 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/30 17:17:16 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	del(void delc, size_t dels)
{
	ft_memdel(delc);
	dels = NULL;
}

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst)
		return (0);
	del(alst->content, alst->content_size);
	free(alst);
	alst = NULL;
}
