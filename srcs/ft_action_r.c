/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:45:34 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/19 00:32:46 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

static void	ft_ru(t_stack **s)
{
	t_stack	*head;
	t_stack	*tmp;

	if (!*s || !(*s)->next)
		return ;
	head = *s;
	*s = (*s)->next;
	tmp = *s;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = head;
	head->next = NULL;
}

void	ft_ra(t_data *d)
{
	ft_ru(&(d->a));
	if (d->print)
		ft_ps("ra");
}

void	ft_rb(t_data *d)
{
	ft_ru(&(d->b));
	if (d->print)
		ft_ps("rb");
}

void	ft_rr(t_data *d)
{
	ft_ru(&(d->a));
	ft_ru(&(d->b));
	if (d->print)
		ft_ps("rr");
}
