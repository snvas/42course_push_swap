/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:51:38 by snovaes           #+#    #+#             */
/*   Updated: 2021/12/14 20:06:03 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

static int	ft_check_arg(char *n)
{
	long	l;

	if (is_number(n) == FALSE)
		return (ft_pser("Error\n") * 0);
	l = ft_atol(n);
	if (l > INT_MAX)
		return (ft_pser("Error\n") * 0);
	if (l < INT_MIN)
		return (ft_pser("Error\n") * 0);
	return (TRUE);
}

int	ft_args(int ac, char **av, t_data *d)
{
	int	x;
	int	start;

	x = 1;
	start = 0;
	while (x < ac)
	{
		if (ft_check_arg(av[x]) == FALSE)
			return (FALSE);
		start = ft_push_init(&(d->a), ft_atoi(av[x]), -1);
		if (start == FALSE)
			return (FALSE);
		x++;
	}
	return (TRUE);
}
