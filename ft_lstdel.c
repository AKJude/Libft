/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajude <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 18:15:16 by ajude             #+#    #+#             */
/*   Updated: 2016/10/19 18:15:17 by ajude            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *link;
	t_list *nxt;

	if (!alst || !*alst || !del)
		return ;
	link = *alst;
	while (link)
	{
		nxt = link->next;
		del(link->content, link->content_size);
		free(link);
		link = nxt;
	}
	*alst = NULL;
}
