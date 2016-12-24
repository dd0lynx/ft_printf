/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddowty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 20:51:49 by ddowty            #+#    #+#             */
/*   Updated: 2016/11/04 18:10:30 by ddowty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_strnew(size_t size)
{
	char	*p;
	size_t	i;

	i = 0;
	if ((p = (char *)malloc(size + 1)) != NULL)
	{
		while (i < size)
		{
			p[i] = '\0';
			i++;
		}
		p[i] = '\0';
	}
	return ((void *)p);
}
