/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:33:08 by snovaes           #+#    #+#             */
/*   Updated: 2021/12/14 20:07:50 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ps(char *str)
{
	int		i;
	char	n;

	i = 0;
	while (str[i])
		i++;
	n = '\n';
	write(STDOUT, str, i);
	write(STDOUT, &n, 1);
	return (i);
}

int	ft_psc(char *str, char *color)
{
	write(STDOUT, color, ft_strlen(color));
	write(STDOUT, str, ft_strlen(str));
	write(STDOUT, DEF, ft_strlen(DEF));
	return (0);
}

int	ft_pser(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(STDERR, str, i);
	return (i);
}

int	ft_pserc(char *str, char *color)
{
	write(STDERR, color, ft_strlen(color));
	write(STDERR, str, ft_strlen(str));
	write(STDERR, DEF, ft_strlen(DEF));
	return (ft_strlen(color) + ft_strlen(str) + ft_strlen(DEF));
}
