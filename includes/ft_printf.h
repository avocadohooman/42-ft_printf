/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 12:57:21 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/06 16:41:11 by gmolin           ###   ########.fr       */
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
# include "../libft/includes/libft.h"

/*
** ------ STRUCTS ------
*/

typedef struct	s_psetup
{
		char	*FLAGS;
		int 	WIDTH;
		char	*PRECISION;
		char	*LNGTH;
		char	*CNV;
}				t_psetup;

/*
** ------ GLOBAL FUNCTIONS ------
*/

int		ft_printf(const char *fmt, ...);

#endif
