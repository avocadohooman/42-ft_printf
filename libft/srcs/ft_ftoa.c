/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 09:43:04 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/15 10:29:02 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libft.h"

static long double     power(int n, int i)
{
	long		k;
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
static  void       reverse(char* str, int len) 
{ 
    int i = 0, j = len - 1, temp; 
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
static  int         intToStr(int x, char str[], int d) 
{ 
    int i = 0; 
    while (x) { 
        str[i++] = (x % 10) + '0'; 
        x = x / 10; 
    } 
  
    // If number of digits required is more, then 
    // add 0s at the beginning 
    while (i < d) 
        str[i++] = '0'; 
  
    reverse(str, i); 
    str[i] = '\0'; 
    return i; 
} 
  
// Converts a floating-point/double number to a string. 
char                *ft_ftoa(long double n, int afterpoint) 
{ 
    char *str;

    str = malloc(sizeof(char) * 10000);
    // Extract integer part 
    int ipart = (int)n; 
  
    // Extract floating part 
    float fpart = n - (float)ipart; 

    // convert integer part to string 
    int i = intToStr(ipart, str, 0); 
  
    // check for display option after point 
    if (afterpoint != 0) { 
        str[i] = '.'; // add dot 
  
        // Get the value of fraction part upto given no. 
        // of points after dot. The third parameter  
        // is needed to handle cases like 233.007 
        fpart = fpart * power(10, afterpoint); 
  
        intToStr((int)fpart, str + i + 1, afterpoint); 
    } 
    return (str);
} 
