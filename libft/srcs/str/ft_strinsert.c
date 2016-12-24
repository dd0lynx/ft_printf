/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddowty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 23:40:03 by ddowty            #+#    #+#             */
/*   Updated: 2016/12/07 23:53:41 by ddowty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	returns a fresh string by insterting another string into a destnation
**	string at point n. (not protected)
*/

char	*ft_strinsert(const char *dst, const char *src, size_t n)
{
	char	*new;
	size_t	i;
	size_t	k;

	new = ft_strnew(ft_strlen(dst) + ft_strlen(src));
	i = 0;
	k = 0;
	while (dst[i])
	{
		if (i == n)
			while (src[k])
			{
				new[i + k] = src[k];
				k++;
			}
		new[i + k] = dst[i];
		i++;
	}
	return (new);
}
