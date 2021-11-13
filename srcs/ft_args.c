/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:51:38 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/12 20:16:36 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

static int	ft_arg_error(char *n)
{
	long	l;

	if (ft_isnum_s(n, 10) == 0)
		return (printf("Error: One argument is not an int\n"));
	l = ft_atol(n);
	if (l > INT_MAX)
		return (printf("Error: One argument is too big, over INT_MAX\n"));
	if (l < INT_MIN)
		return (printf("Error: One argument is too small, under INT_MIN\n"));
	return (1);
}

int	ft_arg(int argc, char **argv, t_data *d)
{
	int	x;

	x = 1;
	while (x < argc)
	{
		if (ft_arg_error(argv[x]) == 0)
			return (0);
		if (ft_push_init(&(d->a), ft_atoi(argv[x]), 1) == 0)
			return (0);
		x++;
	}
	return (1);
}
