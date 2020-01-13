/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 15:22:42 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/13 16:31:56 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# define abs(v) (v) < 0 ? (-v) : (v)

static	void ib(unsigned long long n, unsigned long long b, char *res, unsigned long long *p)
{
	char *str = "0123456789abcdef";

	if (n >= b || n <= -b)
		ib (n / b, b, res, p);
	res[(*p)++] = str[abs(n % b)];
}

char	*ft_itoa_base(unsigned long long n, unsigned long long base)
{
	char				*res;
	unsigned long long	p;
	unsigned long long			len;

	p = 0;
	len = ft_count_digits(n, base);
	if (base < 2 || base > 16 || !(res = malloc(sizeof(char) * len + 1)))
		return NULL;
	if (base == 10 && n < 0)
		res[p++] = '-';
	ib (n, base, res, &p);
	res[p] = '\0';
	return (res);
}


/*char	*ft_itoa_base(uintmax_t value, uintmax_t base)
{
	char				*s;
	unsigned long long	n;
	int					i;

	i = 1;
	n = value;
	while ((n /= base) >= 1)
		i++;
	s = (char*)malloc(sizeof(char) * (i + 1));
	s[i] = '\0';
	n = value;
	while (i-- > 0)
	{
		s[i] = (n % base < 10) ? n % base + '0' : n % base + 'a' - 10;
		n /= base;
	}
	return (s);
}
*/

/*
char	*ft_itoa_base(uintmax_t  n, int base)
{
	char	*str;
	int		i;
	int		len;

	if (base < 2 || base > 16 || (base != 10 && n < 0))
		return (NULL);
	len = ft_count_digits(n, base);
	str = (char*)malloc(sizeof(*str) * (len + 1));
	i = 0;
	while (i < len)
	{
		if (base > 10 && (n % base >= 10))
			str[i++] = (n % base) - 10 + 'a';
		else
			str[i++] = (n % base) + '0';
		n /= base;
	}
	str[i] = '\0';
	return (ft_strrev(str));
}
*/