/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowwer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddowty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 17:51:21 by ddowty            #+#    #+#             */
/*   Updated: 2016/12/02 17:54:33 by ddowty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Takes a string and changes uppercase characters to lowercase.
*/

void	ft_strlowwer(char *str)
{
	if (str)
		while (*str)
		{
			if (*str >= 'A' && *str <= 'Z')
				*str -= 32;
			str++;
		}
}
