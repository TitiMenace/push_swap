/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 02:57:55 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/19 02:58:16 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdbool.h>

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

/* -------------------------------------------------------------------------- */
/*                          FILE = src/find_values.c                          */
/* -------------------------------------------------------------------------- */
int	find_min(void);
int	find_max(void);

/* -------------------------------------------------------------------------- */
/*                          FILE = src/init_stack.c                           */
/* -------------------------------------------------------------------------- */
int	check_av(char *str);
int	check_m(char *str);
int	ft_atoi(char *str);
bool	init_stack(char **str);

/* -------------------------------------------------------------------------- */
/*                          FILE = src/debug_utils.c                          */
/* -------------------------------------------------------------------------- */
void	print_stacks(int *sa, int *sb, int la, int lb);
void	print_tab(int *stack, int len);

/* -------------------------------------------------------------------------- */
/*                           FILE = src/push_swap.c                           */
/* -------------------------------------------------------------------------- */
bool	check_sort(void);
int	push_swap(int ac);
int	main(int ac, char **av);

/* -------------------------------------------------------------------------- */
/*                       FILE = src/init_stack_utils.c                        */
/* -------------------------------------------------------------------------- */
int	ft_strcmp(char *s1, char *s2);
int	ft_strlen(char *str);
int	check_min(int count, char *min, char *str);
int	check_max(int count, char *max, char *str);

/* -------------------------------------------------------------------------- */
/*                          FILE = src/singletone.c                           */
/* -------------------------------------------------------------------------- */
void	ft_bzero(void *ptr, int size);
t_data	*_data(void);

/* -------------------------------------------------------------------------- */
/*                             FILE = src/algo.c                              */
/* -------------------------------------------------------------------------- */
void	rotate_stack(void);
int	insert_sort(void);
int	algo(void);

/* -------------------------------------------------------------------------- */
/*                         FILE = src/parsing_index.c                         */
/* -------------------------------------------------------------------------- */
int	parsing_val_max(int stack_size);
int	parsing_val_min(void);
int	init_index(int i, int count, int stack_size, int nb);
int	parsing_index(int nb, int stack_size);

/* -------------------------------------------------------------------------- */
/*                        FILE = src/reverse_rotate.c                         */
/* -------------------------------------------------------------------------- */
int	reverse_rotate_a(t_data *data);
int	reverse_rotate_b(t_data *data);
int	reverse_rotate_r(t_data *data);

/* -------------------------------------------------------------------------- */
/*                          FILE = src/swap_moves.c                           */
/* -------------------------------------------------------------------------- */
int	swap_a(t_data *data);
int	swap_b(t_data *data);
int	swap_s(t_data *data);

/* -------------------------------------------------------------------------- */
/*                        FILE = src/push_swap_utils.c                        */
/* -------------------------------------------------------------------------- */
int	check_multiple(int *stack_a, int stack_size);
int	max(int a, int b);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

/* -------------------------------------------------------------------------- */
/*                          FILE = src/cost_calcul.c                          */
/* -------------------------------------------------------------------------- */
int	best_moves(t_tmp *tmp);
void	cost_loop(t_cost *cost);
int	cost_calcul(int value, int index, t_cost *cost);

/* -------------------------------------------------------------------------- */
/*                          FILE = src/push_moves.c                           */
/* -------------------------------------------------------------------------- */
int	push_a(t_data *data);
int	push_b(t_data *data);

/* -------------------------------------------------------------------------- */
/*                          FILE = src/struct_cost.c                          */
/* -------------------------------------------------------------------------- */
void	pattern_1(t_cost *cost, t_tmp *tmp);
void	pattern_2(t_cost *cost, t_tmp *tmp);
void	pattern_3(t_cost *cost, t_tmp *tmp);
void	pattern_4(t_cost *cost, t_tmp *tmp);
int	struct_cost(t_cost *cost, t_tmp *tmp, int best_move);

/* -------------------------------------------------------------------------- */
/*                          FILE = src/moves_utils.c                          */
/* -------------------------------------------------------------------------- */
int	*add_front(int *stack, int len, int nb);
int	*add_back(int *stack, int len, int nb);
int	*del_front(int *stack, int len);
int	*del_back(int *stack, int len);

/* -------------------------------------------------------------------------- */
/*                         FILE = src/setup_stacks.c                          */
/* -------------------------------------------------------------------------- */
void	setup_rotate_rotate(t_cost *cost);
void	setup_rotates(t_cost *cost);
void	setup_reverse_r(t_cost *cost);
int	setup_stacks(t_cost *cost);

/* -------------------------------------------------------------------------- */
/*                            FILE = src/rotate.c                             */
/* -------------------------------------------------------------------------- */
int	rotate_a(t_data *data);
int	rotate_b(t_data *data);
int	rotate_r(t_data *data);

/* -------------------------------------------------------------------------- */
/*                          FILE = src/three_algo.c                           */
/* -------------------------------------------------------------------------- */
int	two_params(void);
int	three_pattern_1(void);
int	three_pattern_2(void);
int	three_params(void);

/* -------------------------------------------------------------------------- */
/*                          FILE = src/init_struct.c                          */
/* -------------------------------------------------------------------------- */
bool	init_struct(int stack_size);
void	init_cost(t_cost *cost);
void	init_tmp(t_tmp *tmp);


#endif
