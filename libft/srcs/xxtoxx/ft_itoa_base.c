/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddowty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:43:48 by ddowty            #+#    #+#             */
/*   Updated: 2016/11/28 00:22:16 by ddowty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	basecvrt(long *num, int base)
{
	int		n;

	n = *num % base;
	*num /= base;
	return (n);
}

static int	n_places(long num, int base)
{
	int		i;
	long	n;

	i = 0;
	n = num;
	while (n > 0)
	{
		i++;
		n /= base;
	}
	return (i);
}

static char	*ft_strbuild(long num, int base, int sign)
{
	int		i;
	int		len;
	char	base_t[base];
	char	*s;

	i = 0;
	while (i < base)
	{
		base_t[i] = i + '0';
		i++;
	}
	len = n_places(num, base) + sign;
	if (!(s = (char *)malloc((len * sizeof(char)) + 1)))
		return (s);
	s[len] = '\0';
	if (sign > 0)
		s[0] = '-';
	while ((len -= 1) >= 0)
	{
		if (sign == 0 || len != 0)
			s[len] = base_t[basecvrt(&num, base)];
	}
	return (s);
}

char		*ft_itoa_base(int value, int base)
{
	long	n;
	int		sign;
	char	*str;

	if (value == 0)
	{
		if (!(str = (char *)malloc(2)))
			return (str);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	n = value;
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	str = ft_strbuild(n, base, sign);
	return (str);
}
