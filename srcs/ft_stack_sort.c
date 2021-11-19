/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:40:56 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/18 22:21:10 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_swap_stack(t_stack **x, t_stack *y)
{
	t_stack	*tmp;

	tmp = *x;
	*x = y->next_sort;
	tmp->next_sort = y->next_sort->next_sort;
	(*x)->next_sort = tmp;
}

void	ft_stack_sort(t_stack **head)
{
	t_stack	*last;
	t_stack	*prev;

	prev = NULL;
	last = *head;
	while (last && last->next_sort)
	{
		//se o valor atual - o valor seguinte for maior do que zero
		if (last->data - last->next_sort->data > 0)
		{
			if (prev == NULL)
				ft_swap_stack(head, last);
			else
				ft_swap_stack(&(prev->next_sort), last);
			last = *head;
			prev = NULL;
		}
		//senão só troca de posição
		else
		{
			prev = last;
			last = last->next_sort;
		}
	}
}
