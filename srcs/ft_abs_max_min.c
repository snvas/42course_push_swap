/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs_max_min.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:23:56 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/15 23:12:33 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	ft_max(int x, int y)
{
	if (x > y)
		return (x);
	return (y);
}

int	ft_min(int x, int y)
{
	if (x > y)
		return (y);
	return (x);
}

int	ft_abs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}
