/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 17:29:54 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/30 17:36:24 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd(t_list **alst, t_list *new)
{
	new->next = alst;
}
