/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:13:42 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/12 23:55:28 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	ft_has_index(t_stack *s, int index)
{
	while (s)
	{
		if (s->index == index)
			return (TRUE);
		s = s->next;
	}
	return (FALSE);
}

void	ft_solve_5(t_data *d)
{
	t_stack	*s;
	int		min;
	int		distance;

	while (ft_has_index(d->a, 0) || ft_has_index(d->a, d->max - 1))
	{
		s = d->a;
		min = INT_MAX;
		while (s)
		{
			if (s->index == 0 || s->index == d->max -1)
			{
				distance = ft_distance_to_top(d->a, s->index);
				if (ft_abs(distance) < ft_abs(min))
					min = distance;
			}
			s = s->next;
		}
		if (min == 0)
			ft_pb(d);
		else if (min < 0)
			ft_rra(d);
		else if (min > 0)
			ft_ra(d);
	}
}
