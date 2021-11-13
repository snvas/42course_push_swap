/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:55:35 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/12 21:03:56 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void ft_indexing(t_stack *sorted_index, t_data *d)
{
	int i;

	i = 0;
	while (sorted_index)
	{
		sorted_index->index = i++;
		sorted_index = sorted_index->next_sort;
	}
	d->max = i;
}
