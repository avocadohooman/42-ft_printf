/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 09:32:42 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/16 17:25:18 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static	char	*length_check_f(long double n, t_menu *menu, va_list arg)
{
    if (menu->length == 0)
        n = (double)va_arg(arg, double);
    else if (menu->length == L)
        n = va_arg(arg, long double);
	(n < 0) ? menu->sign = 1 : 0;
	return (ft_ftoa(n, menu->precision, menu->precisionft));
}

void	conv_f(t_menu *menu, va_list arg)
{
    char              	*str;
	long double			n;

    str = length_check_f(n, menu, arg);
	menu->nb = menu->precision - ft_strlen(str);
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
