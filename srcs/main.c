/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 11:03:55 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/13 17:19:00 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/ft_printf.h"

void	simple(void)
{
	
	/*
	** ****************** Simple string without any variables ******************
	*/
	
	//printf("SIMPLE STRING TEST WITHOUT ANY VARIABLES\n");

	//ft_printf("This is a String\n");
	//printf("%d\n", ft_printf("This is a String\n"));

}

void	c(void)
{
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
}

void	s(void)
{
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
}

void	p(void)
{
	/*
	** ****************** TESTING ENVIRONMENT WITH %p ******************
	*/

	ft_printf("\n******************  TESTING ENVIRONMENT WITH %%p ******************\n\n");

	char	*test;
	void	*pointer;
	int		a;

	pointer = &test;
	//printf("0x%s\n", test = ft_itoa_base((unsigned long long)pointer, 16));
	/*
	ft_printf("\n****** TEST #1 ******\n\n");
	ft_printf("'%p'\n", pointer);
	printf("'%p'\n", pointer);

	ft_printf("'% p'\n", &test);
	printf("'% p'\n", &test);

	ft_printf("'%10 p'\n", &test);
	printf("'%10 p'\n", &test);

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
	*/
}

void	id(void)
{
	/*
	** ****************** TESTING ENVIRONMENT WITH %i and %d ******************
	*/

	ft_printf("\n******************  TESTING ENVIRONMENT WITH %%i AND %%d ******************\n\n");

	long double d = 3.1415926535;
	long long int lli = 55165;
	long long int lli_m = 18446744073709551615;
	int	i = 3;
	long long int lli_n = -55165;
	int	i_n = -3;

	//printf( "%Lg\n", d );
	
	
	//LEFT ALIGNED TESTS START
	ft_printf("\n******************  LEFT ALIGNED TESTS START ******************\n\n");
	/*
	ft_printf("\n****** TEST #1 ******\n\n");
	ft_printf("'%-+i'\n'%-+lli'\n", i, lli);
	printf("'%-+i'\n'%-+lli'\n", i, lli);

	ft_printf("\n****** TEST #2 ******\n\n");
	ft_printf("'%-i'\n'%-lli'\n", i_n, lli_n);
	printf("'%-i'\n'%-lli'\n", i_n, lli_n);

	ft_printf("\n****** TEST #3 ******\n\n");
	ft_printf("'%-+ i'\n'%-+ lli'\n", i, lli);
	printf("'%-+ i'\n'%-+ lli'\n", i, lli);

	ft_printf("\n****** TEST #4 ******\n\n");
	ft_printf("'%- i'\n'%- lli'\n", i_n, lli_n);
	printf("'%- i'\n'%- lli'\n", i_n, lli_n);

	ft_printf("\n****** TEST #5 ******\n\n");
	ft_printf("'%-10 i'\n'%-10 lli'\n", i, lli);
	printf("'%-10 i'\n'%-10 lli'\n", i, lli);

	ft_printf("\n****** TEST #6 ******\n\n");
	ft_printf("'%- i'\n'%- lli'\n", i, lli);
	printf("'%- i'\n'%- lli'\n", i, lli);

	ft_printf("\n****** TEST #7 ******\n\n");
	ft_printf("'%- .5i'\n'%- .10lli'\n", i, lli);
	printf("'%- .5i'\n'%- .10lli'\n", i, lli);

	ft_printf("\n****** TEST #8 ******\n\n");
	ft_printf("'%- .i'\n'%- .lli'\n", i, lli);
	printf("'%- .i'\n'%- .lli'\n", i, lli);

	ft_printf("\n****** TEST #9 ******\n\n");
	ft_printf("'%- .0i'\n'%- .0lli'\n", i, lli);
	printf("'%- .0i'\n'%- .0lli'\n", i, lli);

	ft_printf("\n****** TEST #10 ******\n\n");
	ft_printf("'%- i'\n'%- lli'\n", i_n, lli_n);
	printf("'%- i'\n'%- lli'\n", i_n, lli_n);

	ft_printf("\n****** TEST #11 ******\n\n");
	ft_printf("'%-10 i'\n'%-10 lli'\n", i_n, lli_n);
	printf("'%-10 i'\n'%-10 lli'\n", i_n, lli_n);

	ft_printf("\n****** TEST #12 ******\n\n");
	ft_printf("'%-10.5lld'\n'%-10.5d'\n", lli, i);
	printf("'%-10.5lld'\n'%-10.5d'\n", lli, i);

	ft_printf("\n****** TEST #13 ******\n\n");
	ft_printf("'%-+10.5d'\n", i);
	printf("'%-+10.5d'\n", i);

	ft_printf("\n****** TEST #14 ******\n\n");
	ft_printf("'%-+60.20d'\n", i_n);
	printf("'%-+60.20d'\n", i_n);

	ft_printf("\n****** TEST #15 ******\n\n");
	ft_printf("'%-10.5d'\n", i);
	printf("'%-10.5d'\n", i);

	ft_printf("\n****** TEST #16 ******\n\n");
	ft_printf("'%-010.5lld'\n'%-10.5d'\n", lli_n, i_n);
	printf("'%-010.5lld'\n'%-10.5d'\n", lli_n, i_n);

	ft_printf("\n****** TEST #17 ******\n\n");
	ft_printf("'%-lld'\n'%-d'\n", lli, i);
	printf("'%-lld'\n'%-d'\n", lli, i);

	ft_printf("\n****** TEST #18 ******\n\n");
	ft_printf("'%-+015.10hi.'\n", (short int)92);
	printf("'%-+015.10hi.'\n", (short int)92);

	*/
	//LEFT ALIGNED TEST END
	ft_printf("\n******************  LEFT ALIGNED TESTS END ******************\n\n");
	

	//RIGHT ALIGNED TESTS START
	/*
	ft_printf("\n******************  RIGHT ALIGNED TESTS START ******************\n\n");
	
	ft_printf("'%ld'\n", -42);
	printf("'%ld'\n", -42);

	ft_printf("\n****** TEST #1 ******\n\n");
	ft_printf("'%+ i'\n'%+ lli'\n", i, lli);
	printf("'%+ i'\n'%+ lli'\n", i, lli);

	ft_printf("\n****** TEST #2 ******\n\n");
	ft_printf("'% i'\n'% lli'\n", i_n, lli_n);
	printf("'% i'\n'% lli'\n", i_n, lli_n);

	ft_printf("\n****** TEST #3 ******\n\n");
	ft_printf("'%10 i'\n'%10 lli'\n", i, lli);
	printf("'%10 i'\n'%10 lli'\n", i, lli);

	ft_printf("\n****** TEST #4 ******\n\n");
	ft_printf("'% i'\n'% lli'\n", i, lli);
	printf("'% i'\n'% lli'\n", i, lli);

	ft_printf("\n****** TEST #5 ******\n\n");
	ft_printf("'% .5i'\n'% .10lli'\n", i, lli);
	printf("'% .5i'\n'% .10lli'\n", i, lli);

	ft_printf("\n****** TEST #6 ******\n\n");
	ft_printf("'% .i'\n'% .lli'\n", i, lli);
	printf("'% .i'\n'% .lli'\n", i, lli);

	ft_printf("\n****** TEST #7 ******\n\n");
	ft_printf("'% .0i'\n'% .0lli'\n", i, lli);
	printf("'% .0i'\n'% .0lli'\n", i, lli);

	ft_printf("\n****** TEST #8 ******\n\n");
	ft_printf("'% i'\n'% lli'\n", i_n, lli_n);
	printf("'% i'\n'% lli'\n", i_n, lli_n);

	ft_printf("\n****** TEST #9 ******\n\n");
	ft_printf("'%+.5d'\n'%+.5lld'\n", i, lli);
	printf("'%+.5d'\n'%+.5lld'\n", i, lli);

	ft_printf("\n****** TEST #10 ******\n\n");
	ft_printf("'%+010.5d'\n'%+010.5lld'\n", i, lli);
	printf("'%+010.5d'\n'%+010.5lld'\n", i, lli);

	ft_printf("\n****** TEST #11 ******\n\n");
	ft_printf("'%+010.5d'\n'%+010.5lld'\n", i_n, lli_n);
	printf("'%+010.5d'\n'%+010.5lld'\n", i_n, lli_n);
	
	ft_printf("\n****** TEST #12 ******\n\n");
	ft_printf("'%+010d'\n'%+010lld'\n", i, lli);
	printf("'%+010d'\n'%+010lld'\n", i, lli);

	ft_printf("\n****** TEST #13 ******\n\n");
	ft_printf("'%+0*.5d'\n", 10, i);
	printf("'%+0*.5d'\n", 10, i);

	ft_printf("\n****** TEST #14 ******\n\n");
	ft_printf("'%010d'\n'%-010d'\n", i, i);
	printf("'%010d'\n'%-010d'\n", i, i);

	ft_printf("\n****** TEST #15 ******\n\n");
	ft_printf("'%010d'\n'%-+010.5d'\n", i, i);
	printf("'%010d'\n'%-+010.5d'\n", i, i);

	ft_printf("\n****** TEST #16 ******\n\n");
	ft_printf("'%lld'\n'%d'\n", lli, i);
	printf("'%lld'\n'%d'\n", lli, i);

	ft_printf("\n****** TEST #17 ******\n\n");
	ft_printf("'%+025.5d'\n", i);
	printf("'%+025.5d'\n", i);

	ft_printf("\n****** TEST #18 ******\n\n");
	ft_printf("'%+015.10hi.'\n", (short int)92);
	printf("'%+015.10hi.'\n", (short int)92);
	*/

	//RIGHT ALIGNED TESTS END
	ft_printf("\n******************  RIGHT ALIGNED TESTS END ******************\n\n");
}

void	o(void)
{
	/*
	** ****************** TESTING ENVIRONMENT WITH %o ******************
	*/

	ft_printf("\n******************  TESTING ENVIRONMENT WITH %%o ******************\n\n");
	/*
	//LEFT ALIGNED TESTS START
	ft_printf("\n******************  LEFT ALIGNED TESTS START ******************\n\n");
	
	unsigned long long int lli_m = 18446744073709551615;
	unsigned long long int lli_m_n = -18446744073709551615;
	int	i = 3;
	unsigned long long int lli = 6964321;
	unsigned long long int lli_n = -55165;
	int	i_n = -3;

	ft_printf("\n****** TEST #1 ******\n\n");
	ft_printf("'%-o'\n'%-o'\n", i, i_n);
	printf("'%-o'\n'%-o'\n", i, i_n);
	
	ft_printf("\n****** TEST #2 ******\n\n");
	ft_printf("'%-#o'\n'%-#o'\n", i, i_n);
	printf("'%-#o'\n'%-#o'\n", i, i_n);

	ft_printf("\n****** TEST #3 ******\n\n");
	ft_printf("'%-#o'\n'%-#llo'\n", i, lli);
	printf("'%-#o'\n'%-#llo'\n", i, lli);

	ft_printf("\n****** TEST #4 ******\n\n");
	ft_printf("'%-#o'\n'%-#llo'\n", i, lli);
	printf("'%-#o'\n'%-#llo'\n", i, lli);

	ft_printf("\n****** TEST #5 ******\n\n");
	ft_printf("'%-+#o'\n'%-+#llo'\n", i_n, lli_m_n);
	printf("'%-+#o'\n'%-+#llo'\n", i_n, lli_m_n);

	ft_printf("\n****** TEST #6 ******\n\n");
	ft_printf("'%- o'\n'%- llo'\n", i_n, lli);
	printf("'%- o'\n'%- llo'\n", i_n, lli);
	
	ft_printf("\n****** TEST #6 ******\n\n");
	ft_printf("'%o'\n'%#llo'\n", i, lli);
	printf("'%o'\n'%#llo'\n", i, lli);

	ft_printf("\n****** TEST #7 ******\n\n");
	ft_printf("'%+#.30o'\n'%+#ll.30o'\n", i, lli);
	printf("'%+#.30o'\n'%+#ll.30o'\n", i, lli);
	
	ft_printf("\n****** TEST #8 ******\n\n");
	ft_printf("'%+.30o'\n'%+ll.30o'\n", i, lli);
	printf("'%+.30o'\n'%+ll.30o'\n", i, lli);

	ft_printf("\n****** TEST #8 ******\n\n");
	ft_printf("'%+#50.30o'\n'%+#50.30llo'\n", i, lli);
	printf("'%+#50.30o'\n'%+#50.30llo'\n", i, lli);
	
	ft_printf("\n****** TEST #9 ******\n\n");
	ft_printf("'%+50.30o'\n'%+50.30llo'\n", i, lli);
	printf("'%+50.30o'\n'%+50.30llo'\n", i, lli);

	ft_printf("\n****** TEST #10 ******\n\n");
	ft_printf("'%-+#50.30o'\n'%-+#50.30llo'\n", i, lli);
	printf("'%-+#50.30o'\n'%-+#50.30llo'\n", i, lli);
	
	ft_printf("\n****** TEST #10 ******\n\n");
	ft_printf("'%-+50.30o'\n'%-+50.30llo'\n", i, lli);	
	printf("'%-+50.30o'\n'%-+50.30llo'\n", i, lli);	

	ft_printf("\n****** TEST #11 ******\n\n");
	ft_printf("'%-+#050.30o'\n'%-+#050.30llo'\n", i, lli);
	printf("'%-+#050.30o'\n'%-+#050.30llo'\n", i, lli);

	ft_printf("\n****** TEST #12 ******\n\n");
	ft_printf("'%+050.30o'\n'%+050.30llo'\n", i, lli);
	printf("'%+050.30o'\n'%+050.30llo'\n", i, lli);

	ft_printf("\n****** TEST #13 ******\n\n");
	ft_printf("'%-+#050.30o'\n'%-+#050.30llo'\n", i, lli);
	printf("'%-+#050.30o'\n'%-+#050.30llo'\n", i, lli);
	
	ft_printf("\n****** TEST #14 ******\n\n");
	ft_printf("'%-+050.30o'\n'%-+050.30llo'\n", i, lli);	
	printf("'%-+050.30o'\n'%-+050.30llo'\n", i, lli);	

	ft_printf("\n****** TEST #15 ******\n\n");
	ft_printf("'%-+#050o'\n'%-+#050llo'\n", i, lli);
	printf("'%-+#050o'\n'%-+#050llo'\n", i, lli);
	
	ft_printf("\n****** TEST #16 ******\n\n");
	ft_printf("'%-+050o'\n'%-+050llo'\n", i, lli);
	printf("'%-+050o'\n'%-+050llo'\n", i, lli);

	ft_printf("\n****** TEST #17 ******\n\n");
	ft_printf("'%-+#050o'\n'%-+#050llo'\n", i, lli);
	printf("'%-+#050o'\n'%-+#050llo'\n", i, lli);
	
	ft_printf("\n****** TEST #18 ******\n\n");
	ft_printf("'%-+050o'\n'%-+050llo'\n", i, lli);
	printf("'%-+050o'\n'%-+050llo'\n", i, lli);

	ft_printf("\n****** TEST #19 ******\n\n");
	ft_printf("'%-+050.o'\n'%-+050ll.o'\n", i, lli);
	printf("'%-+050.o'\n'%-+050ll.o'\n", i, lli);

	ft_printf("\n****** TEST #20 ******\n\n");
	ft_printf("'%-+050.0o'\n'%-+050ll.0o'\n", i, lli);
	printf("'%-+050.0o'\n'%-+050ll.0o'\n", i, lli);
	*/
	//LEFT ALIGNED TEST END
	ft_printf("\n******************  LEFT ALIGNED TESTS END ******************\n\n");
	
	/*
	//RIGHT ALIGNED TESTS START
	ft_printf("\n******************  RIGHT ALIGNED TESTS START ******************\n\n");

	ft_printf("\n****** TEST #1 ******\n\n");
	ft_printf("'%o'\n'%o'\n", i, i_n);
	printf("'%o'\n'%o'\n", i, i_n);
	
	ft_printf("\n****** TEST #2 ******\n\n");
	ft_printf("'%#o'\n'%#o'\n", i, i_n);
	printf("'%#o'\n'%#o'\n", i, i_n);


	ft_printf("\n****** TEST #3 ******\n\n");
	ft_printf("'%#o'\n'%#llo'\n", i, lli);
	printf("'%#o'\n'%#llo'\n", i, lli);

	ft_printf("\n****** TEST #4 ******\n\n");
	ft_printf("'%#o'\n'%#llo'\n", i, lli);
	printf("'%#o'\n'%#llo'\n", i, lli);

	ft_printf("\n****** TEST #5 ******\n\n");
	ft_printf("'%+#o'\n'%+#llo'\n", i_n, lli);
	printf("'%+#o'\n'%+#llo'\n", i_n, lli);

	ft_printf("\n****** TEST #6 ******\n\n");
	ft_printf("'% o'\n'% llo'\n", i_n, lli);
	printf("'% o'\n'% llo'\n", i_n, lli);
	
	ft_printf("\n****** TEST #6 ******\n\n");
	ft_printf("'%o'\n'%#llo'\n", i, lli);
	printf("'%o'\n'%#llo'\n", i, lli);

	ft_printf("\n****** TEST #7 ******\n\n");
	ft_printf("'%+#.30o'\n'%+#ll.30o'\n", i, lli);
	printf("'%+#.30o'\n'%+#ll.30o'\n", i, lli);
	
	ft_printf("\n****** TEST #8 ******\n\n");
	ft_printf("'%+.30o'\n'%+ll.30o'\n", i, lli);
	printf("'%+.30o'\n'%+ll.30o'\n", i, lli);

	ft_printf("\n****** TEST #8 ******\n\n");
	ft_printf("'%+#50.30o'\n'%+#50.30llo'\n", i, lli);
	printf("'%+#50.30o'\n'%+#50.30llo'\n", i, lli);
	
	ft_printf("\n****** TEST #9 ******\n\n");
	ft_printf("'%+50.30o'\n'%+50.30llo'\n", i, lli);
	printf("'%+50.30o'\n'%+50.30llo'\n", i, lli);

	ft_printf("\n****** TEST #10 ******\n\n");
	ft_printf("'%+#50.30o'\n'%+#50.30llo'\n", i, lli);
	printf("'%+#50.30o'\n'%+#50.30llo'\n", i, lli);
	
	ft_printf("\n****** TEST #10 ******\n\n");
	ft_printf("'%+50.30o'\n'%+50.30llo'\n", i, lli);	
	printf("'%+50.30o'\n'%+50.30llo'\n", i, lli);	

	ft_printf("\n****** TEST #11 ******\n\n");
	ft_printf("'%+#050.30o'\n'%+#050.30llo'\n", i, lli);
	printf("'%+#050.30o'\n'%+#050.30llo'\n", i, lli);

	ft_printf("\n****** TEST #12 ******\n\n");
	ft_printf("'%+050.30o'\n'%+050.30llo'\n", i, lli);
	printf("'%+050.30o'\n'%+050.30llo'\n", i, lli);

	ft_printf("\n****** TEST #13 ******\n\n");
	ft_printf("'%+#050.30o'\n'%+#050.30llo'\n", i, lli);
	printf("'%+#050.30o'\n'%+#050.30llo'\n", i, lli);
	
	ft_printf("\n****** TEST #14 ******\n\n");
	ft_printf("'%+050.30o'\n'%+050.30llo'\n", i, lli);	
	printf("'%+050.30o'\n'%+050.30llo'\n", i, lli);	

	ft_printf("\n****** TEST #15 ******\n\n");
	ft_printf("'%+#050o'\n'%+#050llo'\n", i, lli);
	printf("'%+#050o'\n'%+#050llo'\n", i, lli);


	ft_printf("\n****** TEST #19 ******\n\n");
	ft_printf("'%-+050.o'\n'%-+050ll.o'\n", i, lli);
	printf("'%-+050.o'\n'%-+050ll.o'\n", i, lli);

	ft_printf("\n****** TEST #20 ******\n\n");
	ft_printf("'%+050.0o'\n'%+050ll.0o'\n", i, lli);
	printf("'%+050.0o'\n'%+050ll.0o'\n", i, lli);
	*/
	
	//RIGHT ALIGNED TESTS END
	ft_printf("\n******************  RIGHT ALIGNED TESTS END ******************\n\n");
	
}

void	u(void)
{
	/*
	** ****************** TESTING ENVIRONMENT WITH %u ******************
	*/

	ft_printf("\n******************  TESTING ENVIRONMENT WITH %%u******************\n\n");

	long double d = 3.1415926535;
	unsigned long long int 	llu = 55165;
	unsigned long long int 	llu_m = 18446744073709551615;
	unsigned int			u = 3;
	long long int llu_n = -55165;
	int	u_n = -3;

	//printf( "%Lg\n", d );
	
	
	//LEFT ALIGNED TESTS START
	ft_printf("\n******************  LEFT ALIGNED TESTS START ******************\n\n");
	
	ft_printf("\n****** TEST #1 ******\n\n");
	ft_printf("'%-+u'\n'%-+llu'\n", u, llu);
	printf("'%-+u'\n'%-+llu'\n", u, llu);

	ft_printf("\n****** TEST #2 ******\n\n");
	ft_printf("'%-u'\n'%-llu'\n", u_n, llu_n);
	printf("'%-u'\n'%-llu'\n", u_n, llu_n);

	ft_printf("\n****** TEST #3 ******\n\n");
	ft_printf("'%-+ u'\n'%-+ llu'\n", u, llu);
	printf("'%-+ u'\n'%-+ llu'\n", u, llu);

	ft_printf("\n****** TEST #4 ******\n\n");
	ft_printf("'%- u'\n'%- llu'\n", u_n, llu_n);
	printf("'%- u'\n'%- llu'\n", u_n, llu_n);

	ft_printf("\n****** TEST #5 ******\n\n");
	ft_printf("'%-10 u'\n'%-10 llu'\n", u, llu);
	printf("'%-10 u'\n'%-10 llu'\n", u, llu);

	ft_printf("\n****** TEST #6 ******\n\n");
	ft_printf("'%- u'\n'%- llu'\n", u, llu);
	printf("'%- u'\n'%- llu'\n", u, llu);

	ft_printf("\n****** TEST #7 ******\n\n");
	ft_printf("'%- .5u'\n'%- .10llu'\n", u, llu);
	printf("'%- .5u'\n'%- .10llu'\n", u, llu);

	ft_printf("\n****** TEST #8 ******\n\n");
	ft_printf("'%- .u'\n'%- .llu'\n", u, llu);
	printf("'%- .u'\n'%- .llu'\n", u, llu);

	ft_printf("\n****** TEST #9 ******\n\n");
	ft_printf("'%- .0u'\n'%- .0llu'\n", u, llu);
	printf("'%- .0u'\n'%- .0llu'\n", u, llu);

	ft_printf("\n****** TEST #10 ******\n\n");
	ft_printf("'%- u'\n'%- llu'\n", u_n, llu_n);
	printf("'%- u'\n'%- llu'\n", u_n, llu_n);

	ft_printf("\n****** TEST #11 ******\n\n");
	ft_printf("'%-10 u'\n'%-10 llu'\n", u_n, llu_n);
	printf("'%-10 u'\n'%-10 llu'\n", u_n, llu_n);

	ft_printf("\n****** TEST #12 ******\n\n");
	ft_printf("'%-10.5llu'\n'%-10.5u'\n", llu, u);
	printf("'%-10.5llu'\n'%-10.5u'\n", llu, u);

	ft_printf("\n****** TEST #13 ******\n\n");
	ft_printf("'%-+10.5u'\n",u);
	printf("'%-+10.5u'\n",u);

	ft_printf("\n****** TEST #14 ******\n\n");
	ft_printf("'%-+60.20u'\n",u_n);
	printf("'%-+60.20u'\n",u_n);

	ft_printf("\n****** TEST #15 ******\n\n");
	ft_printf("'%-10.5u'\n",u);
	printf("'%-10.5u'\n",u);

	ft_printf("\n****** TEST #16 ******\n\n");
	printf("'%-010.5llu'\n'%-10.5u'\n", llu_n, u_n);
	ft_printf("'%-010.5llu'\n'%-10.5u'\n", llu_n, u_n);

	ft_printf("\n****** TEST #17 ******\n\n");
	ft_printf("'%-llu'\n'%-u'\n", llu, u);
	printf("'%-llu'\n'%-u'\n", llu, u);

	ft_printf("\n****** TEST #18 ******\n\n");
	ft_printf("'%-+015.10hu.'\n", (short int)92);
	printf("'%-+015.10hu.'\n", (short int)92);

	
	//LEFT ALIGNED TEST END
	ft_printf("\n******************  LEFT ALIGNED TESTS END ******************\n\n");
	

	//RIGHT ALIGNED TESTS START
	/*
	ft_printf("\n******************  RIGHT ALIGNED TESTS START ******************\n\n");
	
	ft_printf("'%ld'\n", -42);
	printf("'%ld'\n", -42);

	ft_printf("\n****** TEST #1 ******\n\n");
	ft_printf("'%+ i'\n'%+ lli'\n", i, lli);
	printf("'%+ i'\n'%+ lli'\n", i, lli);

	ft_printf("\n****** TEST #2 ******\n\n");
	ft_printf("'% i'\n'% lli'\n", i_n, lli_n);
	printf("'% i'\n'% lli'\n", i_n, lli_n);

	ft_printf("\n****** TEST #3 ******\n\n");
	ft_printf("'%10 i'\n'%10 lli'\n", i, lli);
	printf("'%10 i'\n'%10 lli'\n", i, lli);

	ft_printf("\n****** TEST #4 ******\n\n");
	ft_printf("'% i'\n'% lli'\n", i, lli);
	printf("'% i'\n'% lli'\n", i, lli);

	ft_printf("\n****** TEST #5 ******\n\n");
	ft_printf("'% .5i'\n'% .10lli'\n", i, lli);
	printf("'% .5i'\n'% .10lli'\n", i, lli);

	ft_printf("\n****** TEST #6 ******\n\n");
	ft_printf("'% .i'\n'% .lli'\n", i, lli);
	printf("'% .i'\n'% .lli'\n", i, lli);

	ft_printf("\n****** TEST #7 ******\n\n");
	ft_printf("'% .0i'\n'% .0lli'\n", i, lli);
	printf("'% .0i'\n'% .0lli'\n", i, lli);

	ft_printf("\n****** TEST #8 ******\n\n");
	ft_printf("'% i'\n'% lli'\n", i_n, lli_n);
	printf("'% i'\n'% lli'\n", i_n, lli_n);

	ft_printf("\n****** TEST #9 ******\n\n");
	ft_printf("'%+.5d'\n'%+.5lld'\n", i, lli);
	printf("'%+.5d'\n'%+.5lld'\n", i, lli);

	ft_printf("\n****** TEST #10 ******\n\n");
	ft_printf("'%+010.5d'\n'%+010.5lld'\n", i, lli);
	printf("'%+010.5d'\n'%+010.5lld'\n", i, lli);

	ft_printf("\n****** TEST #11 ******\n\n");
	ft_printf("'%+010.5d'\n'%+010.5lld'\n", i_n, lli_n);
	printf("'%+010.5d'\n'%+010.5lld'\n", i_n, lli_n);
	
	ft_printf("\n****** TEST #12 ******\n\n");
	ft_printf("'%+010d'\n'%+010lld'\n", i, lli);
	printf("'%+010d'\n'%+010lld'\n", i, lli);

	ft_printf("\n****** TEST #13 ******\n\n");
	ft_printf("'%+0*.5d'\n", 10, i);
	printf("'%+0*.5d'\n", 10, i);

	ft_printf("\n****** TEST #14 ******\n\n");
	ft_printf("'%010d'\n'%-010d'\n", i, i);
	printf("'%010d'\n'%-010d'\n", i, i);

	ft_printf("\n****** TEST #15 ******\n\n");
	ft_printf("'%010d'\n'%-+010.5d'\n", i, i);
	printf("'%010d'\n'%-+010.5d'\n", i, i);

	ft_printf("\n****** TEST #16 ******\n\n");
	ft_printf("'%lld'\n'%d'\n", lli, i);
	printf("'%lld'\n'%d'\n", lli, i);

	ft_printf("\n****** TEST #17 ******\n\n");
	ft_printf("'%+025.5d'\n", i);
	printf("'%+025.5d'\n", i);

	ft_printf("\n****** TEST #18 ******\n\n");
	ft_printf("'%+015.10hi.'\n", (short int)92);
	printf("'%+015.10hi.'\n", (short int)92);
	*/

	//RIGHT ALIGNED TESTS END
	ft_printf("\n******************  RIGHT ALIGNED TESTS END ******************\n\n");
	
}


int main()
{
	/*
	** ****************** Testing ft_printf ******************
	*/

	//simple();
	//c();
	//s();
	//p();
	//id();
	//o();
	u();
	//x();

	//while (1);
	return (0);
}
