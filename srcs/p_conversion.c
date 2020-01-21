/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 15:05:51 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/21 16:17:12 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_p(t_menu *menu, va_list arg)
{
	unsigned long long	pointer;
	char				*str;
	char				*joint;
	int					nb;

	pointer = va_arg(arg, unsigned long long);
	str = ft_itoa_base((unsigned long long)pointer, 16);
	joint = ft_strjoin("0x", str);
	nb = menu->width - (ft_strlen(joint));
	if (menu->minus == 0 && nb > 0)
		(menu->zero == 1) ? printzero(menu, nb) : printspace(menu, nb);
	if (menu->minus == 1 && nb > 0)
	{
		ft_putstr(joint);
		printspace(menu, nb);
	}
	else
		ft_putstr(joint);
	menu->printed += ft_strlen(joint);
	free(str);
	free(joint);
}
