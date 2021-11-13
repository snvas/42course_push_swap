/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:25:19 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/12 20:55:08 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

static int ft_in_stack(t_stack *s, int data)
{
	while (s)
	{
		if (s->data == data)
			return (1);
		s = s->next;
	}
	return (0);
}

int ft_push_init(t_stack **s, int data, int index)
{
	t_stack *elem;
	t_stack *last;

	last = *s;
	if (ft_in_stack(*s, data) == 1)
		return (printf("Error: One int is present multiples times\n"));
	elem = malloc(sizeof(t_stack));
	if (!elem)
		return (printf("Error: Malloc failed in ft_push_init\n"));
	elem->data = data;
	elem->index = index;
	elem->next = NULL;
	elem->next_sort = NULL;
	if (last == NULL)
	{
		*s = elem;
		return (1);
	}
	while (last->next)
		last = last->next;
	last->next = elem;
	last->next_sort = elem;
	return (1);
}

