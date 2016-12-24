/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddowty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 23:08:42 by ddowty            #+#    #+#             */
/*   Updated: 2016/11/04 21:16:55 by ddowty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	chr;

	chr = (char)c;
	while ((char)*s != chr)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
