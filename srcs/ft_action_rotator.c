/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action_rotator.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:02:10 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/12 22:09:22 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

static void	ft_double_rotator(t_data *d, int *ra, int *rb)
{
	while (*ra > 0 && *rb > 0)
	{
		(*ra)--;
		(*rb)--;
		ft_rr(d);
	}
	while (*ra < 0 && *rb < 0)
	{
		(*ra)++;
		(*rb)++;
		ft_rrr(d);
	}
}

void	ft_rotator(t_data *d, int ra, int rb)
{
	ft_double_rotator(d, &ra, &rb);
	while (ra > 0)
	{
		ra--;
		ft_ra(d);
	}
	while (ra < 0)
	{
		ra++;
		ft_rra(d);
	}
	while (rb > 0)
	{
		rb--;
		ft_rb(d);
	}
	while (rb < 0)
	{
		rb++;
		ft_rrb(d);
	}
}
