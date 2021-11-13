/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:28:11 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/12 21:43:45 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

static void	ft_p(t_stack **s1, t_stack **s2)
{
	t_stack	*head;

	if (!*s1)
		return ;
	head = *s1;
	*s1 = head->next;
	if (*s2)
		head->next = *s2;
	else
		head->next = NULL;
	*s2 = head;
}

void	ft_pa(t_data *d)
{
	ft_p(&(d->b), &(d->a));
	if (d->print)
		ft_ps("pa\n");
}
