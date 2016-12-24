/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padstr_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddowty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 22:15:36 by ddowty            #+#    #+#             */
/*   Updated: 2016/12/04 23:21:59 by ddowty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_padstr_f(char *str, size_t len, char padding)
{
	char	*pad;
	size_t	i;

	i = 0;
	if (!(pad = ft_strnew(len)))
		return (NULL);
	while (i < len)
	{
		pad[i] = padding;
		i++;
	}
	str = ft_strjoin_free(pad, str);
	return (str);
}
