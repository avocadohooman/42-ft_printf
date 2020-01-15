/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 09:32:42 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/15 10:29:56 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	conv_f(t_menu *menu, va_list arg)
{
    long double n;
    char        *str;
    float       fpart;

    n = 0;
    if (menu->length == 0)
        n = (long double)va_arg(arg, double);
    if (menu->length == L)
        n = (long double)va_arg(arg, long double);
    
    int ipart = (int)n; 
    fpart = n - (long double)ipart; 
    printf("FPART %.10f\n", fpart);
    
    str = ft_ftoa(n, 20);
    //ft_putstr("HELLO");
    ft_putstr(str);
}
