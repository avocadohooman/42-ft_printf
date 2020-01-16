#include <stdio.h>
#include <unistd.h>

int		ft_printf(const char *format, ...);

void	website(void)
{
	int len;
	int len1;

	printf("WEBSITE\n\n");

	len = printf("Characters: %c %c \n", 'a', 65);
	len1 = ft_printf("Characters: %c %c \n", 'a', 65);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("Decimals: %d %ld\n", 1977, 650000L);
	len1 = ft_printf("Decimals: %d %ld\n", 1977, 650000L);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("Preceding with blanks: %10d \n", 1977);
	len1 = ft_printf("Preceding with blanks: %10d \n", 1977);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("Preceding with zeros: %010d \n", 1977);
	len1 = ft_printf("Preceding with zeros: %010d \n", 1977);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
	len1 = ft_printf("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
	len1 = ft_printf("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("Width trick: %*d \n", 5, 10);
	len1 = ft_printf("Width trick: %*d \n", 5, 10);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%s \n", "A string");
	len1 = ft_printf("%s \n", "A string");
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");
}

void	random(void)
{
	printf("RANDOM\n\n");

	return ;
}

void	c(void)
{
	int len;
	int len1;

	printf("CHARACTERS\n\n");

	len = printf("first letter %c.\n", 'a');
	len1 = ft_printf("first letter %c.\n", 'a');
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("first letter %10c.\n", 'a');
	len1 = ft_printf("first letter %10c.\n", 'a');
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("first letter %-10c.\n", 'a');
	len1 = ft_printf("first letter %-10c.\n", 'a');
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");
	return ;
}

void	s(void)
{
	int len;
	int len1;

	printf("STRINGS\n\n");

	len = printf("this %.s.\n", "works");
	len1 = ft_printf("this %.s.\n", "works");
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("this %.0s.\n", "works");
	len1 = ft_printf("this %.0s.\n", "works");
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("this %s.\n", "works");
	len1 = ft_printf("this %s.\n", "works");
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("this %10s.\n", "works");
	len1 = ft_printf("this %10s.\n", "works");
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("this %-10s.\n", "works");
	len1 = ft_printf("this %-10s.\n", "works");
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("this %10.4s.\n", "works");
	len1 = ft_printf("this %10.4s.\n", "works");
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("this %10.1s.\n", "works");
	len1 = ft_printf("this %10.1s.\n", "works");
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("this %10.0s.\n", "works");
	len1 = ft_printf("this %10.0s.\n", "works");
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("this %10.100s.\n", "works");
	len1 = ft_printf("this %10.100s.\n", "works");
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("this %1s.\n", "works");
	len1 = ft_printf("this %1s.\n", "works");
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");
	return ;
}

void	p(void)
{
	int 	len;
	int 	len1;
	char	test[] = "hello world!";

	printf("POINTERS\n\n");

	len = printf("%p.\n", test);
	len1 = ft_printf("%p.\n", test);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%15p.\n", test);
	len1 = ft_printf("%15p.\n", test);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%5p.\n", test);
	len1 = ft_printf("%5p.\n", test);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%50p.\n", test);
	len1 = ft_printf("%50p.\n", test);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%-50p.\n", test);
	len1 = ft_printf("%-50p.\n", test);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");
}

void	o(void)
{
	int len;
	int len1;

	printf("OCTALS\n\n");

	len = printf("% #10hho.\n", (unsigned char)42);
	len1 = ft_printf("% #10hho.\n", (unsigned char)42);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("% #-10llo.\n", (unsigned long long)424242);
	len1 = ft_printf("% #-10llo.\n", (unsigned long long)424242);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%#010o.\n", 4242);
	len1 = ft_printf("%#010o.\n", 4242);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%#010.2o.\n", 4242);
	len1 = ft_printf("%#010.2o.\n", 4242);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%#010.6o.\n", 4242);
	len1 = ft_printf("%#010.6o.\n", 4242);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%#010.0o.\n", 4242);
	len1 = ft_printf("%#010.0o.\n", 4242);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%010.0o.\n", 4242);
	len1 = ft_printf("%010.0o.\n", 4242);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%010.0o.\n", 0);
	len1 = ft_printf("%010.0o.\n", 0);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%#010.0o.\n", 0);
	len1 = ft_printf("%#010.0o.\n", 0);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%#010.10o.\n", 0);
	len1 = ft_printf("%#010.10o.\n", 0);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%#10.10o.\n", 01010);
	len1 = ft_printf("%#10.10o.\n", 01010);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");
	return ;
}

void	di(void)
{
	int len;
	int len1;

	printf("DECIMAL AND INTEGER\n\n");

	len = printf("'%+010.0d'\n", 100);
	len1 = ft_printf("'%+010.0d'\n", 100);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("'%+010.1d'\n", 100);
	len1 = ft_printf("'%+010.1d'\n", 100);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");
	
	len = printf("'%+010.5d'\n", 303);
	len1 = ft_printf("'%+010.5d'\n", 303);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("'%+010.3d'\n", 303);
	len1 = ft_printf("'%+010.3d'\n", 303);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");
}
void	u(void) // leaks
{
	int len;
	int len1;
	long long int lli = 55165;
	int	i = 3;
	long long int lli_n = -3;
	int	i_n = -3;

	 printf("UNSIGNED INTEGERS\n\n");

	 len = printf("% +010hhu.\n", (unsigned char)255);
	 len1 = ft_printf("% +010hhu.\n", (unsigned char)255);
	 if (len == len1)
	 	printf("\033[0;32m%s\033[0m\n", "OK");
	 else
	 	printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%+10hu.\n", (unsigned short int)65535);
	len1 = ft_printf("%+10hu.\n", (unsigned short int)65535);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%.20lu.\n", (unsigned long)4294967295);
	len1 = ft_printf("%.20lu.\n", (unsigned long)4294967295);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%.10llu.\n", (unsigned long long)18446744073709551615);
	len1 = ft_printf("%.10llu.\n", (unsigned long long)18446744073709551615);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%-30hhu.\n", (unsigned char)255);
	len1 = ft_printf("%-30hhu.\n", (unsigned char)255);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%0-10hu.\n", (unsigned short int)65535); // LEAKS HERE!!! single "0" comes with the - flag.
	len1 = ft_printf("%0-10hu.\n", (unsigned short int)65535);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%.5lu.\n", (unsigned long)4294967295);
	len1 = ft_printf("%.5lu.\n", (unsigned long)4294967295);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%llu.\n", (unsigned long long)18446744073709551615);
	len1 = ft_printf("%llu.\n", (unsigned long long)18446744073709551615);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("'%+010.0u'\n", 0);
	len1 = ft_printf("'%+010.0u'\n", 0);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	return ;
}

void	x(void)
{
	int len;
	int len1;

	printf("HEXADECIMALS\n\n");

	// len = printf("% +010hhx.\n", (unsigned char)255);
	// len1 = ft_printf("% +010hhx.\n", (unsigned char)255);
	// if (len == len1)
	// 	printf("\033[0;32m%s\033[0m\n", "OK");
	// else
	// 	printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("% #+010.0x.\n", (unsigned int)8080);
	len1 = ft_printf("% #+010.0x.\n", (unsigned int)8080);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("% +010.0x.\n", (unsigned int)8080);
	len1 = ft_printf("% +010.0x.\n", (unsigned int)8080);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("% +010.0x.\n", 0);
	len1 = ft_printf("% +010.0x.\n", 0);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%.0x.\n", 0);
	len1 = ft_printf("%.0x.\n", 0);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%# 5.30llx.\n", (unsigned long long)65461688461565);
	len1 = ft_printf("%# 5.30llx.\n", (unsigned long long)65461688461565);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%# 5.4llx.\n", (unsigned long long)100);
	len1 = ft_printf("%# 5.4llx.\n", (unsigned long long)100);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%020.1x.\n", 255);
	len1 = ft_printf("%020.1x.\n", 255);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%.1x.\n", 255);
	len1 = ft_printf("%.1x.\n", 255);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");

	len = printf("%# 5.*llX.\n", 30, (unsigned long long)65461688461565);
	len1 = ft_printf("%# 5.*llX.\n", 30, (unsigned long long)65461688461565);
	if (len == len1)
		printf("\033[0;32m%s\033[0m\n", "OK");
	else
		printf("\033[0;31m%s\033[0m\n", "KO");
	return ;
}
void flag_mayhem(void)
{
	printf("FLAG MAYHEM STARTS\n\n");

	ft_printf("\n****** TEST #1 ******\n");
	ft_printf("'%#0-+ i'\n'%- 10i'\n", 55, 555);
	printf("'%#0-+ i'\n'%- 10i'\n", 55, 555);

	printf("FLAG MAYHEM ENDS\n\n");


	return ;
}

int		main(void)
{
	website();
	c();
	s();
	p();
	di();
	o();
	u();
	x();
	random();
	flag_mayhem();
	while (1);
	return (0);
}
