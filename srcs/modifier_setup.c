/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modifier_setup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:36:17 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/08 17:25:36 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h> //remove

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

void	width(t_menu *menu, const char* fmt)
{
	if (fmt[menu->i] >= '0' && fmt[menu->i] <= '9')
		menu->width = ft_atoi(&fmt[menu->i]);
	while (fmt[menu->i] >= '0' && fmt[menu->i] <= '9')
		menu->i++;
}

void	modifier(t_menu *menu, const char *fmt)
{
	flags(menu, fmt);
	width(menu, fmt);
}
