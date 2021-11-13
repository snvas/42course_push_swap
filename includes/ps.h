/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:31:35 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/12 21:10:10 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_H
# define PS_H

# include <limits.h>
# include <stdio.h>
# include "libft.h"

typedef struct s_stack
{
	long			data;
	int				index;
	int				keep;
	struct s_stack	*next;
	struct s_stack	*next_sort;	
}	t_stack;

typedef struct s_data
{
	t_stack	*a;
	t_stack	*b;
	int		max;
	int		big;
	int		size;
	int		group_count;
	int		group_size;
	int		operation_count;
	int		print;
}	t_data;

int		ft_arg(int argc, char **argv, t_data *d);
int		ft_push_init(t_stack **s, int data, int index);

int		ft_isnum_s(char *str, int base);
int		ft_free_data(t_data *d);
int		ft_free_stack(t_stack **stack);
int		ft_is_sort(t_data *d);

void	ft_stack_sort(t_stack **head);
void	ft_swap_stack(t_stack **x, t_stack *y);
void	ft_indexing(t_stack *sorted_index, t_data *d);
int		ft_isspace_ps(int c);


#endif