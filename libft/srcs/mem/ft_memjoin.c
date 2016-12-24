/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddowty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 16:17:50 by ddowty            #+#    #+#             */
/*   Updated: 2016/12/17 17:15:22 by ddowty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memjoin(const void *p1, const void *p2, size_t l1, size_t l2)
{
	size_t			i;
	unsigned char	*new;

	if (!(p1 || p2))
		return (0);
	new = (unsigned char *)ft_memalloc(l1 + l2);
	i = 0;
	while (i < l1)
	{
		new[i++] = *((unsigned char *)p1);
		p1++;
	}
	while (i < l1 + l2)
	{
		new[i++] = *((unsigned char *)p2);
		p2++;
	}
	return (new);
}
