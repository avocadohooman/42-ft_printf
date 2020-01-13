/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   id_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 14:59:26 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/13 11:12:54 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*length_check_int(intmax_t n, t_menu *menu, va_list arg)
{
	if (menu->length == l)
		n = va_arg(arg, long int);
	else if (menu->length == ll)
		n = va_arg(arg, long long int);
	else if (menu->length == h)
		n = va_arg(arg, int);
	else if (menu->length == hh)
		n = va_arg(arg, int);
	else if (menu->length == 0)
		n = va_arg(arg, int);
	if (n < 0)
	{
		menu->sign = 1;
		n *= -1;
	}
	return (ft_itoa_base(n, 10));
}

char	*leftaligned(t_menu *menu, va_list arg, char *str)
{
	int		nb;
	char	*joint;

	joint = NULL;
	nb = menu->width - ft_strlen(str);
	if (nb > 0)
	{
		return (joint = converter_l(str, nb, menu, ' '));
		/*if (menu->plus == 1 && !menu->sign)
			return (joint = converter_l(str, nb, menu, ' '));
		else if ((!menu->plus && menu->sign) || (menu->plus && menu->sign))
		{
			if (!menu->plus && menu->sign)
				return (joint = converter_l(str, nb, menu, ' '));
			return (joint = converter_l(str, nb, menu, ' '));
		}
	return (joint = converter_l(str, nb, menu, ' '));*/
	
	}
	return (str);
}

char	*rightaligned(t_menu *menu, va_list arg, char *str)
{
	int		nb;
	char	*joint;

	joint = NULL;
	nb = menu->width - ft_strlen(str);
	if (nb > 0)
	{
		if (menu->zero == 1 && menu->width > 0 && !menu->sign && !menu->precision)
		{
			return (joint = converter_r(str, nb, menu, '0'));
			/*if (menu->plus && !menu->sign)
				return (joint = converter_r(str, nb, menu, '0'));
			else if ((!menu->plus && menu->sign) || (menu->plus && menu->sign))
			{
				if (!menu->plus && menu->sign)
					return (joint = converter_r(str, nb, menu, '0'));
				return (joint = converter_r(str, nb, menu, '0'));
			}
			return (joint = converte r_r(str, nb, menu, '0'));*/
		}
		else 
		{
			return (joint = converter_r(str, nb, menu, ' '));
			/*if (menu->plus == 1 && !menu->sign)
				return (joint = converter_r(str, nb, menu, ' '));
			else if ((!menu->plus && menu->sign) || (menu->plus && menu->sign))
			{
				if (!menu->plus && menu->sign)
					return (joint = converter_r(str, nb, menu, ' '));
				return (joint = converter_r(str, nb, menu, ' '));
			}
		return (joint = converter_r(str, nb, menu, ' '));*/
		}
	}
	return (str);
}

void	conv_id(t_menu *menu, va_list arg)
{
	intmax_t		n;
	char			*str;

	n = 0;
	str = length_check_int(n, menu, arg);
	if (menu->precision > 0)
		str = pre_converter(str, menu->precision - ft_strlen(str), menu, '0', 1);
	if (menu->space && !menu->sign)
		str = pre_converter(str, 1, menu, ' ', 2);
	if ((menu->plus && !menu->sign) || menu->sign)
		str = pre_converter(str, 0, menu, '+', 3); 
	if (menu->minus == 1)
		str = leftaligned(menu, arg, str);
	else if (menu->minus == 0)
		str = rightaligned(menu, arg, str);
	ft_putstr(str);
	menu->printed += ft_strlen(str);
	ft_strdel(&str);
}
