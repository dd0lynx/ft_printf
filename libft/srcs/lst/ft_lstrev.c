/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddowty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 19:03:45 by ddowty            #+#    #+#             */
/*   Updated: 2016/11/06 19:11:07 by ddowty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstrev(t_list **list)
{
	t_list	*rev;
	t_list	*next;

	if (list)
	{
		rev = NULL;
		while (*list)
		{
			next = (*list)->next;
			(*list)->next = rev;
			rev = *list;
			*list = next;
		}
		*list = rev;
	}
}
