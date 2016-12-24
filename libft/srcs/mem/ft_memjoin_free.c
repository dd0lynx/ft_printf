/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddowty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 17:15:50 by ddowty            #+#    #+#             */
/*   Updated: 2016/12/17 17:32:54 by ddowty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memjoin_free(void *p1, void *p2, size_t l1, size_t l2)
{
	void	*new;

	if (!(p1 || p2))
		return (0);
	new = ft_memjoin(p1, p2, l1, l2);
	if (p1)
		ft_memdel(&p1);
	if (p2)
		ft_memdel(&p2);
	return (new);
}
