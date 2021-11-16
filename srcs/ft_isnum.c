/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:14:30 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/15 23:22:32 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

static int	ft_isprefix_s(const char *str, int base)
{
	int	i;

	i = 0;
	if (base == 2 || base == 8 || base == 16)
	{
		if (str[i] != '0')
			return (FALSE);
		i++;
		if (base == 2 && (ft_toupper(str[i]) == 'B'))
			return (TRUE);
		if (base == 16 && (ft_toupper(str[i]) == 'X'))
			return (TRUE);
		if (base == 8)
			return (TRUE);
	}
	return (FALSE);
}

static int	ft_isdigit_base_s(char c, int base)
{
	const char	*digits = "0123456789ABCDEF";
	int			i;

	i = 0;
	while (i < base)
	{
		if (ft_toupper(c) == digits[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_isnum_s(char *str, int base)
{
	int	i;
	int	digits;

	i = 0;
	digits = 0;
	while (ft_isspace_ps(str[i]))
		i++;
	if (base != 10 && !ft_isprefix_s(&str[i], base))
		return (FALSE);
	if (base == 2 || base == 16)
		i += 2;
	else if (base == 8)
		i++;
	else if (base == 10 && (str[i] == '-' || str[i] == '+'))
		i++;
	while (ft_isdigit_base_s(str[i], base) >= 0)
	{
		i++;
		digits++;
	}
	if (!str[i] && digits)
		return (TRUE);
	return (FALSE);
}
