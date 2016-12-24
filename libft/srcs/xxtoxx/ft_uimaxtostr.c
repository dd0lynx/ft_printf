/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uimaxtostr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddowty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 18:51:34 by ddowty            #+#    #+#             */
/*   Updated: 2016/12/04 19:38:19 by ddowty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>
#include <stdlib.h>

static int	digit_cnt(uintmax_t n, int base)
{
	int	d;

	d = 0;
	while (n)
	{
		d++;
		n /= base;
	}
	return (d);
}

char		*ft_uimaxtostr(uintmax_t num, int base)
{
	int		digits;
	char	*str;

	if (!num)
	{
		str = (char *)malloc(2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	digits = digit_cnt(num, base);
	str = (char *)malloc(digits + 1);
	str[digits--] = '\0';
	while (num)
	{
		((num % base) < 10) ? (str[digits] = (num % base) + '0') :
			(str[digits] = (num % base) + 'a' - 10);
		num /= base;
		digits--;
	}
	return (str);
}
