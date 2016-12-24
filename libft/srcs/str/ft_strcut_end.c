/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddowty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 01:45:58 by ddowty            #+#    #+#             */
/*   Updated: 2016/11/17 02:06:17 by ddowty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcut_end(char *str, size_t cut)
{
	char	*new;

	new = ft_strsub(str, (unsigned int)cut, ft_strlen(str) - cut);
	return (new);
}
