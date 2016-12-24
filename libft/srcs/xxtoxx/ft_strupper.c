/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddowty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 17:38:51 by ddowty            #+#    #+#             */
/*   Updated: 2016/12/02 17:54:25 by ddowty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Takes a string a changes all alpabetic characters to upper case.
*/

void	ft_strupper(char *str)
{
	if (str)
		while (*str)
		{
			if (*str >= 'a' && *str <= 'z')
				*str -= 32;
			str++;
		}
}
