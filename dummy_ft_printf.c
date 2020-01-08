/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dummy_ft_printf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 10:30:40 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/08 11:49:12 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf(const char *fmt, ...)
{

	
	int counter;
	const char *traverse;
	char *s;
	unsigned int i;
	
	va_list arg;
	va_start(arg, fmt);
	traverse = fmt;
	counter = 0;
	while (*traverse != '\0')
	{
		while (*traverse != '%' && *traverse)
		{
			ft_putchar(*traverse);
			traverse++;
			counter++;
		}
		if (*traverse == '%' && *traverse)
		{
			traverse++;
			if (*traverse == 's' && *traverse)
			{
				s = va_arg(arg, char *);
				ft_putstr(s);
				traverse++;
				counter++;
				continue ;
			}
			if (*traverse == 'd' && *traverse)
			{
				i = va_arg(arg, int);
				ft_putnbr(i);
				traverse++;
				counter++;
				continue ;
			}
			if (*traverse == 'c' && *traverse)
			{
				i = va_arg(arg, int);
				ft_putchar(i);
				traverse++;
				counter++;
				continue ;
			} 
		}
		traverse++;
	}
	return (counter);	
}
