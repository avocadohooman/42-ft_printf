/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 14:59:47 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/19 10:17:30 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static	char	*length_check_x(unsigned long n, t_menu *menu, va_list arg)
{
	if (menu->length == l)
		n = (unsigned long)va_arg(arg, unsigned long);
	else if (menu->length == ll)
		n = (unsigned long long)va_arg(arg, unsigned long long);
	else if (menu->length == h)
		n = (unsigned short)va_arg(arg, unsigned int);
	else if (menu->length == hh)
		n = (unsigned char)va_arg(arg, unsigned int);
	else if (menu->length == Z)
		n = (size_t)va_arg(arg, size_t);
	else if (menu->length == 0)
		n = va_arg(arg, unsigned int);
	return (ft_itoa_base(n, 16));
}

void	conv_x(t_menu *menu, va_list arg)
{
	unsigned long		n;
	char				*str;
	int					i;

	n = 0;
	i = 0;
	str = length_check_x(n, menu, arg);
	(str[0] == '0' && menu->precision == -1) ? str[0] = '\0': 0;
	if (menu->x == 1)
		while (str[i])
		{
			str[i] = ft_toupper(str[i]);
			i++;
		}
	if (menu->hash && str[0] != '0' && str[0] != '\0')
	{
		menu->nb = menu->precision - ft_strlen(str);
		(menu->x == 1) ? str = pre_converter(str, menu, 'X', 0) : 0;
		(menu->x == 0) ? str = pre_converter(str, menu, 'x', 0) : 0;
	}
	(!menu->hash) ? menu->nb = menu->precision - ft_strlen(str) : 0;
	(menu->hash && str[1] == '\0') ? menu->nb = menu->precision - ft_strlen(str) : 0;
	if (menu->precision > 0 && menu->nb > 0)
		str = pre_converter(str, menu, '0', 1);
	(menu->minus == 1) ? str = leftaligned(menu, str) : 0;
	(menu->minus == 0) ? str = rightaligned(menu, str) : 0;
	ft_putstr(str);
	menu->printed += ft_strlen(str);
	ft_strdel(&str);
}
