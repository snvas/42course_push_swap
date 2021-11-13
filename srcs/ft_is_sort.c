/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:36:42 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/12 20:52:31 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	ft_is_sort(t_data *d)
{
	int		prev;
	t_stack	*s;

	if (d->b)
		return (0);
	if (!d->a)
		return (1);
	s = d->a;
	prev = s->data;
	while (s)
	{
		if (prev > s->data)
			return (0);
		prev = s->data;
		s = s->next;
	}
	return (1);
}
