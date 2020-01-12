/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helperfn.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:52:07 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/12 18:33:58 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	printspace(t_menu *menu, int nb)
{
	while (nb > 0)
	{
		ft_putchar(' ');
		nb--;
		menu->printed++;
	}
}

void	printzero(t_menu *menu, int nb)
{
	while (nb > 0)
	{
		ft_putchar('0');
		nb--;
		menu->printed++;
	}
}

void	widthstar(t_menu *menu, const char *fmt, va_list arg)
{
	if (fmt[menu->i] == '*')
	{
		menu->width = va_arg(arg, int);
		if (menu->width < 0)
		{
			menu->minus = 1;
			menu->width *= -1;
		}
		while (fmt[menu->i] == '*')
			menu->i++;
	}
}

char	*pre_converter(char *str, size_t nb, t_menu *menu, char c, int check)
{
	char	*tmp;
	char	*joint;

	joint = NULL;
	tmp = NULL;
	if ((menu->precision > 0 && check == 1) || (menu->space && !menu->sign 
		&& check == 2))
	{	
		tmp = ft_strcnew(nb, c);	
		joint = ft_strjoin(tmp, str);
		free(tmp);
	}
	if (check == 3)
	{
		if ((menu->plus && !menu->sign) || menu->sign)
		{
			if (menu->plus && !menu->sign)
				joint = ft_strjoin("+", str);
			else
				joint = ft_strjoin("-", str);
		}
	}
	free(str);
	return (joint);
}

/*
char	*conv_space(char *str, t_menu *menu)
{
	char	*joint;
	char	*tmp;

	joint = NULL;
	tmp = NULL;
	tmp = ft_strcnew(1, ' ');
	joint = ft_strjoin(tmp, str);
	free(tmp);
	free(str);
	return (joint);
}
*/

char	*converter_l(char *str, size_t nb, t_menu *menu, char c)
{
	char	*joint;
	char	*tmp;

	joint = NULL;
	tmp = NULL;
	/*if (nb == 1)
	{
		tmp = ft_strcnew(1, c);
		joint = ft_strjoin(tmp, str);
	}*/
	if (nb > 1)
	{
		tmp = ft_strcnew(nb, c);	
		joint = ft_strjoin(str, tmp);
	}
	free(tmp);
	free(str);
	return (joint);
}
