/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 09:32:42 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/15 19:22:17 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"


#include <math.h>
#include "libft.h"
#include <stdio.h>

static long double     power(unsigned long long n, unsigned long long i)
{
	long double	k;
	long double	res;

	res = n;
	k = 0;
	if (i == 0)
		return (1);
	while (k < i - 1)
	{
		res = res * n;
		k++;
	}
	return (res);
}

// Reverses a string 'str' of length 'len' 
static  void       reverse(char* str, unsigned long long len) 
{ 
    unsigned long long i = 0, j = len - 1, temp; 
    while (i < j) { 
        temp = str[i]; 
        str[i] = str[j]; 
        str[j] = temp; 
        i++; 
        j--; 
    } 
} 
  
// Converts a given integer x to string str[].  
// d is the number of digits required in the output.  
// If d is more than the number of digits in x,  
// then 0s are added at the beginning. 
static  char         *intToStr(unsigned long long x, char *str, unsigned long long d) 
{ 
    unsigned long long i = 1; 
    
    while (x) 
    { 
        str[i++] = (x % 10) + '0'; 
        x = x / 10; 
    } 
  
    // If number of digits required is more, then 
    // add 0s at the beginning 
    while (i < d) 
        str[i++] = '0'; 
    reverse(str, i); 
    //ft_strrev(str);
    str[i] = '\0'; 
    return (str); 
} 

static long double	rounding(int precision, long double f)
{
	long double	rounding;
	int			d;

	rounding = 0.5;
	if (f < 0)
		rounding *= -1;
	d = 0;
	while (d++ < precision)
		rounding /= 10.0;
	return (rounding);
}

// Converts a floating-point/double number to a string. 
char                *ft_ftoa_test(long double n, int afterpoint) 
{ 
    char    *stri;
    char    *strf = malloc(sizeof(char) * 4096);
    char    *str = malloc(sizeof(char) * 4096);
    
    stri = ft_itoa((unsigned long long) n);
    unsigned long long ipart = (int)n; 
    
    printf("STRI: %s\n", stri);
   // printf("BEFORE ROUNDING %.5Lf\n", n);
    // Extract integer part 
    n += rounding(n, afterpoint);
    //printf("AFTER ROUNDING %.19Lf\n", n);
    // Extract floating part 
    long double fpart = n - (long double)ipart; 

    // convert integer part to string 
    //unsigned long long i = intToStr(ipart, str, 0); 
  
    // check for display option after point 
    printf("FPART %.19Lf\n", fpart);
    if (afterpoint != 0) { 
        strf[0] = '.'; // add dot 
  
        // Get the value of fraction part upto given no. 
        // of points after dot. The third parameter  
        // is needed to handle cases like 233.007 
        fpart = fpart * power(10, afterpoint); 
        printf("%.19Lf\n", fpart);

        strf = intToStr((unsigned long long)fpart, strf, 5);
        printf("STRF:%s\n", strf);
        //intToStr((int)fpart, str + i + 1, afterpoint); 
    } 
    return (str);
} 

void	conv_f(t_menu *menu, va_list arg)
{
    long double       n;
    char              *str;
    long double       fpart;

    n = 0;
    if (menu->length == 0)
        n = (long double)va_arg(arg, double);
    if (menu->length == L)
        n = (long double)va_arg(arg, long double);
    
   // int ipart = (int)n; 
    //printf("%d\n", ipart);
    //fpart = n - (long double)ipart; 
    //printf("FPART %.10f\n", fpart);
    
    str = ft_ftoa_test(n, 19);
    //ft_putstr("HELLO");
    ft_putstr(str);
}
