/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:05:39 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/12 19:27:47 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(char *str)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	if (str[0] == '-')
	{
		sign = -sign;
		i++;
	}
	while (str[i] && i < 19)
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
