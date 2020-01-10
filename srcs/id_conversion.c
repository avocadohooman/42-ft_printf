/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   id_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 14:59:26 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/10 17:55:19 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*length_check_int(intmax_t n, t_menu *menu, va_list arg)
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
	return (ft_itoa(n));
}

char	*conv_id_precision(char *str, size_t nb, t_menu *menu)
{
	char	*tmp;
	char	*joint;

	joint = NULL;
	if (nb > ft_strlen(str))
	{
		tmp = ft_strcnew(nb - ft_strlen(str), '0');
		joint = ft_strjoin(tmp, str);	
		ft_strdel(&tmp);	
	}
	if (menu->plus == 1)
		return (ft_strjoin("+", joint));
	return (joint);
}

void	conv_id(t_menu *menu, va_list arg)
{
	intmax_t		n;
	char			*str;
	size_t			nb;

	str = length_check_int(n, menu, arg);
	if (menu->precision > 0)
		str = conv_id_precision(str, menu->precision, menu);
	ft_putstr(str);
}
