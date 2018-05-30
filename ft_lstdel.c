/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 17:17:10 by kmaputla          #+#    #+#             */
/*   Updated: 2018/05/30 17:29:02 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	void	del(void delc, size_t dels)
{
	ft_memdel(delc);
	dels = NULL;
}

void	t_list(t_list **alst, void (del)(void *, size_t))
{
	t_list *hold;

	while (alst != NULL)
	{
		
		hold = alst->next;
		alst = alst->next;
		del(hold->content, hold->content_size);
		free(hold)
	}
}
