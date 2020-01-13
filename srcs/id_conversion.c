/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   id_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 14:59:26 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/13 17:03:01 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static	char	*length_check_int(intmax_t n, t_menu *menu, va_list arg)
{
	if (menu->length == l)
		n = (long int)va_arg(arg, long int);
	else if (menu->length == ll)
		n = (long long int)va_arg(arg, long long int);
	else if (menu->length == h)
		n = (short int)va_arg(arg, int);
	else if (menu->length == hh)
		n = (signed char)va_arg(arg, int);
	else if (menu->length == 0)
		n = (int)va_arg(arg, int);
	if (n < 0)
	{
		menu->sign = 1;
		n *= -1;
	}
	return (ft_itoa_base(n, 10));
}

void	conv_id(t_menu *menu, va_list arg)
{
	intmax_t		n;
	char			*str;

	n = 0;
	str = length_check_int(n, menu, arg);
	if (menu->precision > 0)
	{
		menu->nb = menu->precision - ft_strlen(str);
		str = pre_converter(str, menu, '0', 1);
	}
	if (menu->space && !menu->sign)
	{
		menu->nb = 1;
		str = pre_converter(str, menu, ' ', 2);
	}
	if ((menu->plus && !menu->sign) || menu->sign )
		str = pre_converter(str, menu, '+', 3); 
	if (menu->minus == 1)
		str = leftaligned(menu, arg, str);
	else if (menu->minus == 0)
		str = rightaligned(menu, arg, str);
	ft_putstr(str);
	menu->printed += ft_strlen(str);
	ft_strdel(&str);
}