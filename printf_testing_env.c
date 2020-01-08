/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_testing_env.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 11:03:55 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/08 17:23:53 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/ft_printf.h"

int main()
{
	
	//Controlling integer width with printf

	printf("%i\n", printf("\n****Controlling integer width with printf****\n\n"));

	printf("%15d\n", 0);
	printf("%15d\n", 123456789);
	printf("%15d\n", 10);
	printf("%15d\n", -123456789);

	//Left-justifying printf integer output

	printf("\n****Left-justifying printf integer output****\n\n");

	printf("%-15d\n", 0);
	printf("%-15d\n", 123456789);
	printf("%-15d\n", 10);
	printf("%-15d\n", -123456789);

	//The printf integer zero-fill option

	printf("\n****The printf integer zero-fill option****\n\n");

	printf("%015d\n", 0);
	printf("%015d\n", 123456789);
	printf("%015d\n", 10);
	printf("%015d\n", -123456789);

	//printf integer formatting

	printf("\n****printf integer formatting****\n\n");

	printf("'%15d'\n", 10);	
	printf("'%-15d'\n", 10);	
	printf("'%015d'\n", 10);	
	printf("'%+15d'\n", 10);	
	printf("'%-+15d'\n", 10);	

	//formatting floating point numbers with printf

	printf("\n****formatting floating point numbers with printf****\n\n");

	printf("'%.1f'\n", 10.3456);	
	printf("'%.2f'\n", 10.3456);	
	printf("'%15.2f'\n", 10.3456);	
	printf("'%15.4f'\n", 10.3456);	
	printf("'%015.2f'\n", 10.3456);	
	printf("'%-15.2f'\n", 10.3456);	
	printf("'%-15.2f'\n", 101234567.3456);	

	char c = 4;
	printf("'%hhd'\n", c);

	char *str = "Hello World";
	int data = 29;
	
	printf("'%.4s\n%x\n%o\n%X\n%u\n%30.3f'\n", str, data, data, data, data, -10.44324234324);

	//Error handling

	printf("");


	//Testing * as wildcard

	printf("'%*.5s\n%x\n%o\n%X\n%u\n%30.3f'\n", 30, str, data, data, data, data, -10.44324234324);


	//Testing conversion c

	char a = 'A';
	
	printf("'%0*c'\n", 5, a);

	return (0);
}
