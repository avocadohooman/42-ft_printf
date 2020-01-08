/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 11:03:55 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/08 17:24:36 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/ft_printf.h"

int main()
{

	
	/*
	** ****************** Testing ft_printf ******************
	*/

	/*
	** ****************** Simple string without any variables ******************
	*/
	
	//printf("SIMPLE STRING TEST WITHOUT ANY VARIABLES\n");

	//ft_printf("This is a String\n");
	//printf("%d\n", ft_printf("This is a String\n"));

	/*
	** ******************  Simple test with only characters ******************
	*/

	//printf("SIMPLE TEST WITH ONLY CHARACTERS\n");

	char c = 'A';

	//printf("Chars printed: %d\n", ft_printf("'%-010c'\n", c));
	
	ft_printf("'%010c'\n", c);
	//printf("%c\n",5, c);
	
	return (0);
}
