/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 12:57:21 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/10 17:42:48 by gmolin           ###   ########.fr       */
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
	
	int			width;			// padding 0 - 9
	int			length;			// h, hh, l, ll, L
	int			precision;		//	. --> how many decimal or characters will be shown
	int			precisionft;

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
void	flags(t_menu *menu, const char *fmt);
void	width(t_menu *menu, const char* fmt, va_list arg);

//c_conversion.c functions

void	conv_c(t_menu *menu, va_list arg);
void	conv_perc(t_menu *menu);

//s_conversion.c functions

void	conv_s(t_menu *menu, va_list arg);
char	*conv_s_precision(char *str, int n);

//p_conversion.c functions

void	conv_p(t_menu *menu, va_list arg);

////id_conversion.c functions

void	conv_id(t_menu *menu, va_list arg);
char	*length_check_int(intmax_t n, t_menu *menu, va_list arg);
char	*conv_id_precision(char *str, size_t nb, t_menu *menu);

//helperfn.c functions

void	printspace(t_menu *menu, int nb);
void	printzero(t_menu *menu, int nb);
void	widthstar(t_menu *menu, const char *fmt, va_list arg);

#endif
