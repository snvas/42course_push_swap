/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action_rr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:37:47 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/19 00:32:12 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

static void	ft_rru(t_stack **s)
{
	t_stack	*last;
	t_stack	*prev;

	if (!*s || !(*s)->next)
		return ;
	last = *s;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	last->next = (*s);
	*s = last;
	prev->next = NULL;
}

void	ft_rra(t_data *d)
{
	ft_rru(&(d->a));
	if (d->print)
		ft_ps("rra");
}

void	ft_rrb(t_data *d)
{
	ft_rru(&(d->b));
	if (d->print)
		ft_ps("rrb");
}

void	ft_rrr(t_data *d)
{
	ft_rru(&(d->a));
	ft_rru(&(d->b));
	if (d->print)
		ft_ps("rrr");
}
