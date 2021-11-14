/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distance_to_top.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:15:28 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/13 22:04:51 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	ft_stack_size(t_stack *s)
{
	int	i;

	i = 0;
	while (s)
	{
		i++;
		s = s->next;
	}
	return (i);
}

int	ft_distance_to_top(t_stack *a, int index)
{
	int	i;
	int	size;

	i = 0;
	size = ft_stack_size(a);
	while (a)
	{
		if (a->index == index)
			break ;
		a = a->next;
		i++;
	}
	if (i > size / 2)
		i -= size;
	return (i);
}

int	ft_distance_to_index(int index, int size)
{
	if (index >= size / 2)
		index -= size;
	return (index);
}
