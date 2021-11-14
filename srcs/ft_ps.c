/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:33:08 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/13 23:27:46 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	ft_ps(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, 1);
	return (i);
}

int	ft_pserc(char *str, char *color)
{
	write(STDERR, color, ft_strlen(color));
	write(STDERR, str, ft_strlen(str));
	write(STDERR, DEF, ft_strlen(DEF));
	return (ft_strlen(color) + ft_strlen(str) + ft_strlen(DEF));
}
