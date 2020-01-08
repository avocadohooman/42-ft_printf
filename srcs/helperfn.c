/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helperfn.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:52:07 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/08 17:05:47 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	printspace(t_menu *menu)
{
	while (menu->width - 1 > 0)
	{
		ft_putchar(' ');
		menu->width--;
	}
}

void	printzero(t_menu *menu)
{
	while (menu->width - 1 > 0)
	{
		ft_putchar('0');
		menu->width--;
	}
}
