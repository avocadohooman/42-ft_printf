/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 18:17:07 by vkuokka           #+#    #+#             */
/*   Updated: 2020/01/10 17:35:27 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcnew(size_t size, int c)
{
	char *area;

	if (!(area = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(area, c, (size));
	return (area);
}
