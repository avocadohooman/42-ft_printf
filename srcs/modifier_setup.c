/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modifier_setup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:36:17 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/10 14:12:42 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	flags(t_menu *menu, const char *fmt)
{
	while (ft_strchr("#0-+ ", fmt[menu->i]))
	{
		if (fmt[menu->i] == '+')
			menu->plus = 1;
		if (fmt[menu->i] == '-')
			menu->minus = 1;
		if (fmt[menu->i] == '#')
			menu->hash = 1;
		if (fmt[menu->i] == ' ')
			menu->space = 1;
		if (fmt[menu->i] == '0')
			menu->zero = 1;
		menu->i++;
	}
	if (menu->plus == 1)
		menu->space = 0;
}

void	width(t_menu *menu, const char	*fmt, va_list arg)
{
	widthstar(menu, fmt, arg);
	if (fmt[menu->i] >= '0' && fmt[menu->i] <= '9')
		menu->width = ft_atoi(&fmt[menu->i]);
	while (fmt[menu->i] >= '0' && fmt[menu->i] <= '9')
		menu->i++;
}

void	precision(t_menu *menu, const char *fmt)
{
	if (fmt[menu->i] == '.') 
	{
		menu->precision = -1;
		if (fmt[menu->i + 1] >= '0' && fmt[menu->i + 1] <= '9')
		{
			menu->i++;
			menu->precision = ft_atoi(&fmt[menu->i]);
			(menu->precision == 0) ? menu->precision = -1 : 0;
		}
		else
			menu->i++;
	}
	while (fmt[menu->i] >= '0' && fmt[menu->i] <= '9')
		menu->i++;
}

void	length(t_menu *menu, const char *fmt)
{
	if (fmt[menu->i] == 'l')
	{
		menu->length = l;
		(fmt[menu->i + 1] == 'l') ? menu->length = ll : 0;
	}
	(fmt[menu->i] == 'L') ? menu->length = L : 0;
	if (fmt[menu->i] == 'h')
	{
		menu->length = h;
		(fmt[menu->i + 1] == 'h') ? menu->length = hh : 0;
	} 
	while (ft_strchr(LENGTH, fmt[menu->i]))
		menu->i++;
}

void	modifier(t_menu *menu, const char *fmt, va_list arg)
{
	flags(menu, fmt);
	width(menu, fmt, arg);
	precision(menu, fmt);
	length (menu, fmt);
}
