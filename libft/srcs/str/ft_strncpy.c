/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddowty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 17:23:16 by ddowty            #+#    #+#             */
/*   Updated: 2016/11/04 03:05:42 by ddowty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*d;

	d = dst;
	while (*src != '\0' && len > 0)
	{
		*d = *src;
		d++;
		src++;
		len--;
	}
	while (len > 0)
	{
		*d = '\0';
		d++;
		len--;
	}
	return (dst);
}
