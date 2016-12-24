/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut_sub.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddowty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 23:13:47 by ddowty            #+#    #+#             */
/*   Updated: 2016/12/01 00:35:26 by ddowty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strcut_sub(char *str, size_t i, size_t len)
{
	char	*temp1;
	char	*temp2;
	char	*new;

	temp1 = ft_strdup(str);
	temp2 = temp1;
	new = temp1;
	temp1 = ft_strcut(temp1, i);
	free(new);
	new = temp2;
	temp2 = ft_strcut_end(temp2, i + len);
	free(new);
	new = ft_strjoin(temp1, temp2);
	free(temp1);
	free(temp2);
	return (new);
}
