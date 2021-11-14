/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:51:38 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/13 21:55:37 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

static int	ft_arg_error(char *n)
{
	long	l;

	if (ft_isnum_s(n, 10) == FALSE)
		return (ft_pserc("Error: One argument is not an int\n", RED) * 0);
	l = ft_atol(n);
	if (l > INT_MAX)
		return (ft_pserc("Error: One argument is too big, over INT_MAX\n", RED) * 0);
	if (l < INT_MIN)
		return (ft_pserc("Error: One argument is too small, under INT_MIN\n", RED) * 0);
	return (TRUE);
}

int	ft_arg(int argc, char **argv, t_data *d)
{
	int	x;

	x = 1;
	while (x < argc)
	{
		if (ft_arg_error(argv[x]) == FALSE)
			return (FALSE);
		if (ft_push_init(&(d->a), ft_atoi(argv[x]), -1) == FALSE)
			return (FALSE);
		x++;
	}
	return (TRUE);
}
