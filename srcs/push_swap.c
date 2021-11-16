/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:30:06 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/15 22:56:08 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	main(int ac, char **av)
{
	t_data	d;
	t_stack	*sorted_index;

	d.a = NULL;
	d.b = NULL;
	d.print = TRUE;
	if (ac < 2)
		return (ft_pserc("Error: Not enough argument\n", RED) * 0 + 1);
	if (ft_arg(ac, av, &d) == FALSE)
		return (ft_free_data(&d));
	if (ft_is_sort(&d) == FALSE)
	{
		sorted_index = (d.a);
		ft_stack_sort(&sorted_index);
		ft_indexing(sorted_index, &d);
		if (d.max == 5)
			ft_solve_5(&d);
		ft_solve(&d, 1);
	}
	ft_free_data(&d);
	sorted_index = NULL;
	return (0);
}
