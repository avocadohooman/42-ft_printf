/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_converter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:52:07 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/13 15:33:17 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*pre_converter(char *str, t_menu *menu, char c, int check)
{
	char	*tmp;
	char	*joint;

	joint = NULL;
	tmp = NULL;
	if (check == 0)
		if (str[0] != '0')
			joint = ft_strjoin("0", str);
	if (check == 1 || check == 2)
	{	
		tmp = ft_strcnew(menu->nb, c);	
		joint = ft_strjoin(tmp, str);
		free(tmp);
	}
	if (check == 3)
		if ((menu->plus && !menu->sign) || menu->sign)
		{
			if (menu->plus && !menu->sign)
				joint = ft_strjoin("+", str);
			else
				joint = ft_strjoin("-", str);
		}
	free(str);
	return (joint);
}

char	*converter_l(char *str, size_t nb, t_menu *menu, char c)
{
	char	*joint;
	char	*tmp;

	joint = NULL;
	tmp = NULL;
	tmp = ft_strcnew(nb, c);	
	joint = ft_strjoin(str, tmp);
	free(tmp);
	free(str);
	return (joint);
}

char	*converter_r(char *str, size_t nb, t_menu *menu, char c)
{
	char	*joint;
	char	*tmp;
	char	s;
	int		i;

	joint = NULL;
	tmp = NULL;
	tmp = ft_strcnew(nb, c);	
	joint = ft_strjoin(tmp, str);
	i = 0;
	free(tmp);
	free(str);
	if (menu->zero && menu->width && (menu->plus || menu->minus) 
		&& !menu->precision && !menu->conv) // (!menu->sign && !menu->precision && !menu->plus && menu->minus)
	{
		while (joint[i] != '+' && joint[i] != '-' && joint[i])
			i++;
		s = joint[i];
		joint[i] = '0';
		joint[0] = s;
	}
	return (joint);
}

char	*leftaligned(t_menu *menu, va_list arg, char *str)
{
	int		nb;
	char	*joint;

	joint = NULL;
	nb = menu->width - ft_strlen(str);
	if (nb > 0)
		return (joint = converter_l(str, nb, menu, ' '));
	return (str);
}

char	*rightaligned(t_menu *menu, va_list arg, char *str)
{
	int		nb;
	char	*joint;

	joint = NULL;
	nb = menu->width - ft_strlen(str);
	if (nb > 0)
	{
		if (menu->zero == 1 && menu->width > 0 && !menu->sign 
			&& !menu->precision)
			return (joint = converter_r(str, nb, menu, '0'));
		else 
			return (joint = converter_r(str, nb, menu, ' '));
	}
	return (str);
}
