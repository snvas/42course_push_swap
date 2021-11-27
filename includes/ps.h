/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:31:35 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/27 13:42:38 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_H
# define PS_H

# include <limits.h>
# include "libft.h"

# define TRUE 1
# define FALSE 0

# define STDIN	0
# define STDOUT	1
# define STDERR	2

# define DEF	"\033[0m"
# define RED	"\033[1;31m"

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
	t_stack	*tmp;
	int		max;
	int		big;
	int		size;
	int		group_count;
	int		group_size;
	int		operation_count;
	int		print;
}	t_data;

int		ft_args(int ac, char **av, t_data *d);
int		ft_push_init(t_stack **s, int data, int index);

void	ft_indexing(t_stack *sorted_index, t_data *d);
void	ft_solve_5(t_data *d);
void	ft_stack_sort(t_stack **head);
void	ft_solve(t_data *d, int group);

void	ft_rotator(t_data *d, int ra, int rb);
void	ft_push_back_to_a(t_data *d);

int		ft_free_data(t_data *d);

int		ft_biggest_loop(t_stack *start, int set);
int		ft_distance_to_top(t_stack *a, int index);
int		ft_distance_to_index(int index, int size);
t_stack	*ft_nearest_in_group(t_stack *s, int group, int group_size);
t_stack	*ft_get_last(t_stack *s);
int		ft_stack_size(t_stack *s);
int		ft_has_index(t_stack *s, int index);
int		ft_is_sort(t_data *d);

void	ft_sa(t_data *d);
void	ft_sb(t_data *d);
void	ft_ss(t_data *d);
void	ft_pa(t_data *d);
void	ft_pb(t_data *d);
void	ft_ra(t_data *d);
void	ft_rb(t_data *d);
void	ft_rr(t_data *d);
void	ft_rra(t_data *d);
void	ft_rrb(t_data *d);
void	ft_rrr(t_data *d);

int		is_number(const char *nbr);

// falta exit e error
int		ft_max(int x, int y);
int		ft_min(int x, int y);
int		ft_abs(int a);

int		ft_pserc(char *str, char *color);
int		ft_ps(char *str);
int		ft_pser(char *str);
int		ft_psc(char *str, char *color);

#endif