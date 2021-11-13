/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:55:11 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/12 20:08:04 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	ft_free_stack(t_stack **stack)
{
	t_stack	*s;
	t_stack	*next;

	s = *stack;
	while (s)
	{
		next = s->next;
		free(s);
		s = next;
	}
	*stack = NULL;
	return (1);
}

int	ft_free_data(t_data *d)
{
	ft_free_stack(&(d->a));
	ft_free_stack(&(d->b));
	return (1);
}
