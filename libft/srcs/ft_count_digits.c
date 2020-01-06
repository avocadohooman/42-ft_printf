/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 15:23:40 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/06 15:28:48 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_digits(uint64_t n, int base)
{
	if (n < (uint64_t)base)
		return (1);
	else
		return (ft_count_digits(n / base, base) + 1);
}
