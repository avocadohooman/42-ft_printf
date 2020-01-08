/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_distributor.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:34:43 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/08 17:05:58 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	conversion_distributor(t_menu *menu, char c, va_list arg)
{
	if (c == 'c')
		conv_c(menu, arg);
}