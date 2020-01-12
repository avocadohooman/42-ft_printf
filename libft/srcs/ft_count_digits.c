/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 15:23:40 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/12 15:37:27 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_digits(intmax_t n, intmax_t base)
{
	if (n < base)
		return (1);
	else
		return (ft_count_digits(n / base, base) + 1);
}
