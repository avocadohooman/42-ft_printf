/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 11:03:55 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/06 17:16:04 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/ft_printf.h"

int main()
{
	char *str = "Hello";
	
	/*
	** Testing ft_printf
	*/

	ft_printf("This is a String: %s.\nThis is an int: %d.\nAnd finally, a letter: %c.\n", str, -42, 'A');
	//printf("This is a String: %s.\nThis is an int: %i.", str, 42);

	return (0);
}