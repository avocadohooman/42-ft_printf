/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 12:57:21 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/18 19:31:22 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*
** ------ HEADERS ------
*/

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <float.h>
# include <limits.h>
# include <stdio.h> // REMOVE
# include "../libft/includes/libft.h"

/*
** ------ FLAGS / MODIFIER / CONVERSION VARIABLES ------
*/

# define l			1
# define ll			2
# define L			3
# define h			4
# define hh			5

# define CONVERSION	"cspdiouxXf%"
# define FLAGS		"#0-+ .*0123456789hlL"
# define ALL		"#0-+ .*0123456789hlLcspdiouxXf%"
# define LENGTH		"lLh"

/*
** ------ STRUCTS ------
*/

typedef struct	s_menu
{

	char		*fmt;

	int			printed;

	int			i;
	int			len;


	int			plus;			// +
	int			minus;			// - left aligned
	int			hash;			//	
	int			space;			// spaces
	int			zero;			// zeros instead of spaces
	int			nb;				// tota length
	char		padding;		// 0 or ' '
	
	int			width;			// padding 0 - 9
	int			length;			// h, hh, l, ll, L
	int			precision;		//	. --> how many decimal or characters will be shown
	int			precisionft;

	int			sign;
	int			conv;
	int			conv2;
	int			conv3;
	int			x;

}				t_menu;


/*
** ------ GLOBAL FUNCTIONS ------
*/

//ft_printf.c functions

int		ft_printf(const char *fmt, ...);
int		fmt_parser(t_menu *menu, const char *fmt, va_list arg, int pos);
int		cm_parser(t_menu *menu, const char *fmt, va_list arg, int pos);
void	initiliaze_menu2(t_menu *menu);
void	initiliaze_menu(t_menu *menu); 

//conversion_distributor.c functions

void	conversion_distributor(t_menu *menu, char c, va_list arg);

//modifier_setup.c functions

void	modifier(t_menu *menu, const char* fmt, va_list arg);

//c_conversion.c functions

void	conv_c(t_menu *menu, va_list arg);
void	conv_perc(t_menu *menu);

//s_conversion.c functions

void	conv_s(t_menu *menu, va_list arg);

//p_conversion.c functions

void	conv_p(t_menu *menu, va_list arg);

//id_conversion.c functions

void	conv_id(t_menu *menu, va_list arg);

//o_conversion.c functions
void	conv_o(t_menu *menu, va_list arg);

//u_conversion.c functions
void	conv_u(t_menu *menu, va_list arg);

//x_conversion.c functions
void	conv_x(t_menu *menu, va_list arg);

//x_conversion.c functions
void	conv_f(t_menu *menu, va_list arg);

//helper_print.c functions

void	printspace(t_menu *menu, int nb);
void	printzero(t_menu *menu, int nb);
void	widthstar(t_menu *menu, const char *fmt, va_list arg);

//helper_converter.c functions

char	*pre_converter(char *str, t_menu *menu, char c, int check);
char	*converter_l(char *str, size_t nb, t_menu *menu, char c);
char	*converter_r(char *str, size_t nb, t_menu *menu, char c);
char	*leftaligned(t_menu *menu, char *str);
char	*rightaligned(t_menu *menu, char *str);

//helper_swap.c functions
char	*swap_plus_minus(char *joint, char c, int i);
char	*swap_zero_x_l(char *joint, char c, int i);
char	*swap_zero_x_r(char *joint, char c, int i);
char	*swap_space(char *joint, char c, int i);


#endif
