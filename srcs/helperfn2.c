/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helperfn2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:52:07 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/13 11:08:54 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*zero_space(t_menu *menu, int nb, char *str)
{
	char	*joint;

	joint = NULL;
	if (menu->zero == 1 && menu->width > 0 && !menu->sign && !menu->precision)
	{
		if (menu->plus && !menu->sign)
			joint = converter_r(str, nb, menu, '0');
		else if ((!menu->plus && menu->sign) || (menu->plus && menu->sign))
		{
			if (!menu->plus && menu->sign)
				joint = converter_r(str, nb, menu, '0');
			//return (ft_strjoin("-", ft_strjoin(ft_strcnew(nb + 1, menu->padding), str)));
			joint = converter_r(str, nb, menu, '0');
		}
		//return (ft_strjoin(ft_strcnew(nb, menu->padding), str));
		joint = converter_r(str, nb, menu, '0');
	}
	//free(str);
	/*else 
	{
		if (menu->plus == 1 && !menu->sign)
			return (ft_strjoin(ft_strcnew(nb, menu->padding), ft_strjoin("+", str)));
		else if ((!menu->plus && menu->sign) || (menu->plus && menu->sign))
		{
			if (!menu->plus && menu->sign)
				return (ft_strjoin(ft_strcnew(nb, menu->padding), ft_strjoin("-", str)));
			return (ft_strjoin(ft_strcnew(nb + 1, menu->padding),ft_strjoin("-", str)));
		}
		return (ft_strjoin(ft_strcnew(nb, menu->padding), str));
	}*/
	return (joint);
}
