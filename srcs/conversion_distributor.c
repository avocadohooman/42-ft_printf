/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_distributor.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:34:43 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/14 17:29:48 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	conversion_distributor(t_menu *menu, char c, va_list arg)
{
	if (c == '%')
		conv_perc(menu);
	if (c == 'c')
		conv_c(menu, arg);
	if (c == 's')
		conv_s(menu, arg);
	if (c == 'p')
		conv_p(menu, arg);
	if (c == 'i' || c == 'd')
		conv_id(menu, arg);
	if (c == 'o' || c == 'u' || c == 'x' || c == 'X')
	{
		menu->conv = 1;
		(c == 'o') ? conv_o(menu, arg) : 0;
		(c == 'u') ? conv_u(menu, arg) : 0;
		if (c == 'x' || c == 'X')
		{
			menu->conv2 = 1;
			(c == 'X') ? menu->x = 1 : 0;
			conv_x(menu, arg);
		}
	}
}
