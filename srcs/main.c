/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 11:03:55 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/10 17:54:28 by gmolin           ###   ########.fr       */
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
	** ******************  TESTING ENVIRONMENT WITH %c******************
	*/

	ft_printf("\n******************  TESTING ENVIRONMENT WITH %%c ******************\n\n");

	char c = 'A';
	char b = 'B';

	//printf("Chars printed: %d\n", ft_printf("'%-010c'\n", c));
	
	ft_printf("'%-*c'\n'%-10c'\n", 10, c, b);
	printf("'%-*c'\n'%-10c'\n", 10, c, b);
	
	ft_printf("'%*c'\n'%10c'\n", 10, c, b);
	printf("'%*c'\n'%10c'\n", 10, c, b);

	ft_printf("'%%%*c%%'\n'%%%10c%%'\n", 10, c, b);
	printf("'%%%*c%%'\n'%%%10c%%'\n", 10, c, b);
	
	/*
	** ****************** TESTING ENVIRONMENT WITH %s ******************
	*/

	ft_printf("\n******************  TESTING ENVIRONMENT WITH %%s ******************\n\n");

	char *str = "Hello World";

	ft_printf("'%-015s'\n'%15c'\n", str, c);
	printf("'%-015s'\n'%15c'\n", str, c);
	
	ft_printf("'%-0*s'\n'%15c'\n", 15, str, c);
	printf("'%-0*s'\n'%15c'\n", 15, str, c);
	
	ft_printf("'%15.s'\n", str);
	printf("'%15.s'\n", str);

	ft_printf("'%15.0s'\n", str);
	printf("'%15.0s'\n", str);

	ft_printf("'%-15.0006s'\n", str);
	printf("'%-15.0006s'\n", str);

	ft_printf("'%*.6s'\n", 15, str);
	printf("'%*.6s'\n", 15, str);

	/*
	** ****************** TESTING ENVIRONMENT WITH %s ******************
	*/

	ft_printf("\n******************  TESTING ENVIRONMENT WITH %%p ******************\n\n");

	char	*test;
	void	*pointer;
	int		a;

	pointer = &test;
	//printf("0x%s\n", test = ft_itoa_base((unsigned long long)pointer, 16));
	
	ft_printf("'%p'\n", pointer);
	printf("'%p'\n", pointer);

	ft_printf("'%p'\n", &test);
	printf("'%p'\n", &test);

	ft_printf("'%15p'\n", &a);
	printf("'%15p'\n", &a);

	ft_printf("\nUNDEFINED BEHAVIOUR ZERO: \n'%020p'\n", &a);
	printf("\nUNDEFINED BEHAVIOUR ZERO: \n'%020p'\n", &a);

	ft_printf("\n'%-*p'\n", 20, &a);
	printf("'%-*p'\n", 20, &a);

	ft_printf("'%*p'\n", 20, &a);
	printf("'%*p'\n", 20, &a);

	ft_printf("'%*20.4p'\n", 20, &a);
	printf("'%*20.4p'\n", 20, &test);

	//printf("PRINTED: %d\n", ft_printf("'\nUNEDEFINED BHEAVIOUR PRECISION \n%20.30p'\n'%20s'\n", &test, str));
	//printf("PRINTED: %d\n", printf("'UNEDEFINED BHEAVIOUR PRECISION \n%20.30p'\n'%20s'\n", &test, str));

	/*
	** ****************** TESTING ENVIRONMENT WITH %i and %d ******************
	*/

	ft_printf("\n******************  TESTING ENVIRONMENT WITH %%i AND %%d ******************\n\n");

	long double d = 3.1415926535;
	long long int i = 55165;
	int	i2 = 3;

	//printf( "%Lg\n", d );
	//printf("\n'%015i'\n", i);

	printf("'%lld'\n'%d'\n", i, i2);
	ft_printf("'%lld'\n'%d'\n", i, i2);


	ft_printf("'%+.5d'\n", i2);
	printf("'%+.5d'\n", i2);



	printf("'%+025.5d'\n", i2);
	//ft_printf("'%lld'\n'%d'\n", i, i2);
	
	return (0);
}

