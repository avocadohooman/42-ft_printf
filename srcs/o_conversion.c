/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 12:10:44 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/18 12:50:37 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static	char	*length_check_o(unsigned long n, t_menu *menu, va_list arg)
{
	if (menu->length == l)
		n = (unsigned long)va_arg(arg, unsigned long);
	else if (menu->length == ll)
		n = (unsigned long long)va_arg(arg, unsigned long long);
	else if (menu->length == h)
		n = (unsigned short)va_arg(arg, unsigned int);
	else if (menu->length == hh)
		n = (unsigned char)va_arg(arg, unsigned int);
	else if (menu->length == 0)
		n = va_arg(arg, unsigned int);
	return (ft_itoa_base(n, 8));
}

void	conv_o(t_menu *menu, va_list arg)
{
	unsigned long		n;
	char				*str;

	n = 0;
	str = length_check_o(n, menu, arg);
	(str[0] == '0' && menu->precision == -1) ? str[0] = '\0': 0;
	if (menu->hash)
		str = pre_converter(str, menu, '0', 0);
	menu->nb = menu->precision - ft_strlen(str);
	if (menu->precision > 0 && menu->nb > 0)
		str = pre_converter(str, menu, '0', 1);
	if (menu->minus == 1)
		str = leftaligned(menu, str);
	else if (menu->minus == 0)
		str = rightaligned(menu, str);
	ft_putstr(str);
	menu->printed += ft_strlen(str);
	ft_strdel(&str);
}
