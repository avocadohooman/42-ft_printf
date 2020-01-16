/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 09:43:04 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/16 18:05:48 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> // remove

static long double	rounding(int precision, long double f)
{
	long double	rounding;
	int			d;

	rounding = 0.5;
	if (f < 0)
		rounding *= -1;
	d = 0;
	while (d++ < precision)
		rounding /= 10.0;
	return (rounding);
}

char				*ft_ftoa(long double f, int precision, int dot)
{
	unsigned long long	dec;
	char				*str_int;
	char				*str_dec;
	char				*joint;
	int					i;

	f = f + rounding(precision, f);
	f *= (f < 0) ? -1 : 1;
	dec = f;
	str_int = ft_itoa(dec);
	f = precision ? (f - dec) : 0;
	str_dec = ft_strnew(precision + 2);
	str_dec[0] = (dot) ? '.' : '\0';
	i = 1;
	while (precision-- > 0)
	{
		f *= 10;
		dec = f;
		f -= dec;
		str_dec[i++] = dec + '0';
	}
	joint = ft_strjoin(str_int, str_dec);
	free(str_dec);
	free(str_int);
	return (joint);
}
