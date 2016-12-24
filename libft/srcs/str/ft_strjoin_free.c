/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddowty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 22:33:29 by ddowty            #+#    #+#             */
/*   Updated: 2016/12/04 23:16:01 by ddowty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin_free(char *s1, char *s2)
{
	char	*new;

	if (!(s1 && s2))
		return (NULL);
	new = ft_strjoin(s1, s2);
	free(s1);
	free(s2);
	s1 = NULL;
	s2 = NULL;
	return (new);
}
