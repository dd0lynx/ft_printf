/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddowty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 01:12:08 by ddowty            #+#    #+#             */
/*   Updated: 2016/11/05 02:50:00 by ddowty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;

	if (!(new = ft_lstnew(lst->content, lst->content_size)))
		return (new);
	new = f(new);
	if (lst->next)
		new->next = ft_lstmap(lst->next, f);
	return (new);
}
