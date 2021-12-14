/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:25:19 by snovaes           #+#    #+#             */
/*   Updated: 2021/12/14 20:06:57 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

static int	ft_already_in_stack(t_stack *s, int data)
{
	while (s)
	{
		if (s->data == data)
			return (TRUE);
		s = s->next;
	}
	return (0);
}

int	ft_push_init(t_stack **s, int data, int index)
{
	t_stack	*elem;
	t_stack	*last;

	last = *s;
	if (ft_already_in_stack(*s, data) == TRUE)
		return (ft_pser("Error\n") * 0);
	elem = malloc(sizeof(t_stack));
	if (!elem)
		return (ft_pser("Error: Malloc failed in ft_push_init\n") * 0);
	elem->data = data;
	elem->index = index;
	elem->next = NULL;
	elem->next_sort = NULL;
	if (last == NULL)
	{
		*s = elem;
		return (TRUE);
	}
	while (last->next)
		last = last->next;
	last->next = elem;
	last->next_sort = elem;
	return (TRUE);
}
