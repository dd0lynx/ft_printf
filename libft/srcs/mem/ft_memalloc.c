/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddowty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 19:54:05 by ddowty            #+#    #+#             */
/*   Updated: 2016/11/04 21:16:08 by ddowty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	if ((p = (unsigned char *)malloc(size)) != NULL)
	{
		while (i < size)
		{
			p[i] = 0;
			i++;
		}
	}
	return ((void *)p);
}
