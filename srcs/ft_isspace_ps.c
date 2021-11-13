/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:33:29 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/12 21:09:20 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace_ps(int c)
{
	return (c == ' '
		|| c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r');
}
