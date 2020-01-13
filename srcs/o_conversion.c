/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 12:10:44 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/13 17:14:41 by gmolin           ###   ########.fr       */
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
	if (menu->hash)
		str = pre_converter(str, menu, '0', 0);
	if (menu->precision > 0)
	{
		menu->nb = menu->precision - ft_strlen(str);
		str = pre_converter(str, menu, '0', 1);
	}
	if (menu->minus == 1)
		str = leftaligned(menu, arg, str);
	else if (menu->minus == 0)
		str = rightaligned(menu, arg, str);
	ft_putstr(str);
	menu->printed += ft_strlen(str);
	ft_strdel(&str);
}