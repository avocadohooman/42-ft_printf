/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_distributor.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:34:43 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/13 17:18:31 by gmolin           ###   ########.fr       */
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
	if (c == 'o')
	{
		menu->conv = 1;
		conv_o(menu, arg);
	}
	if (c == 'u')
	{
		menu->conv = 1;
		conv_u(menu, arg);
	}
}