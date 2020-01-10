/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_distributor.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:34:43 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/10 17:26:30 by gmolin           ###   ########.fr       */
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
}
