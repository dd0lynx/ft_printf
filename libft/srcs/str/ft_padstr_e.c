/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padstr_e.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddowty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 20:24:59 by ddowty            #+#    #+#             */
/*   Updated: 2016/12/05 20:25:04 by ddowty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_padstr_e(char *str, size_t len, char padding)
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
	str = ft_strjoin_free(str, pad);
	return (str);
}
