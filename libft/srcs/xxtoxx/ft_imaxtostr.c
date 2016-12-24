/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imaxtostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddowty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 22:13:17 by ddowty            #+#    #+#             */
/*   Updated: 2016/12/03 01:34:20 by ddowty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>
#include <stdlib.h>

static unsigned int	digit_cnt(intmax_t n)
{
	unsigned int	digits;

	digits = 0;
	while (n != 0)
	{
		digits++;
		n /= 10;
	}
	return (digits);
}

static char			*tostring(char *str, int i, intmax_t n, int neg)
{
	if (i == 0)
	{
		if (neg < 0)
			str[i] = '-';
		else
			str[i] = ((n % 10) * neg) + '0';
		return (str);
	}
	str[i] = ((n % 10) * neg) + '0';
	return (tostring(str, i - 1, n / 10, neg));
}

char				*ft_imaxtostr(intmax_t num)
{
	char			*str;
	unsigned int	sign;
	int				neg;
	unsigned int	digits;

	sign = 0;
	neg = 1;
	if (num <= 0)
	{
		sign = 1;
		neg = -1;
	}
	digits = digit_cnt(num);
	if (!(str = (char *)malloc(digits + sign + 1)))
		return (NULL);
	if (num == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	str[digits + sign] = '\0';
	return (tostring(str, digits + sign - 1, num, neg));
}
