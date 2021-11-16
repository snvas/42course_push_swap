/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_near_group.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:46:47 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/15 23:32:33 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

t_stack	*ft_nearest_in_group(t_stack *s, int group, int group_size)
{
	t_stack	*nearest;
	t_stack	*t;
	int		small_distance;
	int		distance;

	small_distance = INT_MAX;
	nearest = NULL;
	t = s;
	while (t)
	{
		if (t->index <= group_size * group && !t->keep)
		{
			distance = ft_distance_to_top(s, t->index);
			if (ft_abs(distance) < ft_abs(small_distance))
			{
				small_distance = distance;
				nearest = t;
				if (small_distance == 0)
					break ;
			}
		}
		t = t->next;
	}
	return (nearest);
}
