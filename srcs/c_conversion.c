/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 14:23:22 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/08 17:25:29 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	conv_c(t_menu *menu, va_list arg)
{
	unsigned char c;

	c = (unsigned char)va_arg(arg, int);
	if (menu->minus == 0 && menu->width)
	{
		if (menu->zero == 1)
			printzero(menu);
		else if (!menu->zero)
			printspace(menu);
	}
	if (menu->minus == 1 && menu->width)
	{
		ft_putchar(c);
		printspace(menu);
	}
	else
		ft_putchar(c);
	menu->printed++;
}
