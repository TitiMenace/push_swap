/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmechety <rmechety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:52:24 by rmechety          #+#    #+#             */
/*   Updated: 2023/03/18 04:54:11 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

#include <stdbool.h>
#include <struct.h>

#ifndef	BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

/* -------------------------------------------------------------------------- */
/*                       FILE = src_bonus/init_stack.c                        */
/* -------------------------------------------------------------------------- */
int	check_av(char *str);
int	check_m(char *str);
int	ft_atoi(char *str);
bool	init_stack(char **str);

/* -------------------------------------------------------------------------- */
/*                    FILE = src_bonus/init_stack_utils.c                     */
/* -------------------------------------------------------------------------- */
int	ft_strcmp(char *s1, char *s2);
int	ft_strlen(char *str);
int	check_min(int count, char *min, char *str);
int	check_max(int count, char *max, char *str);

/* -------------------------------------------------------------------------- */
/*                       FILE = src_bonus/singletone.c                        */
/* -------------------------------------------------------------------------- */
void	ft_bzero(void *ptr, int size);
t_data	*_data(void);

/* -------------------------------------------------------------------------- */
/*                   FILE = src_bonus/get_next_line_utils.c                   */
/* -------------------------------------------------------------------------- */
int	ft_strlen(char *str);
char	*ft_strndup(char *str);
int	check_buff(char *buffer, char c);
char	*ft_strjoin(char *remain, char *buffer);

/* -------------------------------------------------------------------------- */
/*                         FILE = src_bonus/checker.c                         */
/* -------------------------------------------------------------------------- */
bool	check_sort(void);
char	*read_loop();
int	check_instructions(char *str);
int		main(int ac, char **av);

/* -------------------------------------------------------------------------- */
/*                     FILE = src_bonus/reverse_rotate.c                      */
/* -------------------------------------------------------------------------- */
int	reverse_rotate_a(t_data *data);
int	reverse_rotate_b(t_data *data);
int	reverse_rotate_r(t_data *data);

/* -------------------------------------------------------------------------- */
/*                       FILE = src_bonus/swap_moves.c                        */
/* -------------------------------------------------------------------------- */
int	swap_a(t_data *data);
int	swap_b(t_data *data);
int	swap_s(t_data *data);

/* -------------------------------------------------------------------------- */
/*                      FILE = src_bonus/get_next_line.c                      */
/* -------------------------------------------------------------------------- */
char	*ft_fill_line(char *buffer, int fd, char **remain);
char	*clean_remain(char *remain);
char	*get_next_line(int fd);

/* -------------------------------------------------------------------------- */
/*                     FILE = src_bonus/push_swap_utils.c                     */
/* -------------------------------------------------------------------------- */
int	max(int a, int b);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		check_multiple(int *stack_a, int stack_size);

/* -------------------------------------------------------------------------- */
/*                       FILE = src_bonus/push_moves.c                        */
/* -------------------------------------------------------------------------- */
int	push_a(t_data *data);
int	push_b(t_data *data);

/* -------------------------------------------------------------------------- */
/*                       FILE = src_bonus/moves_utils.c                       */
/* -------------------------------------------------------------------------- */
int	*add_front(int *stack, int len, int nb);
int	*add_back(int *stack, int len, int nb);
int	*del_front(int *stack, int len);
int	*del_back(int *stack, int len);

/* -------------------------------------------------------------------------- */
/*                         FILE = src_bonus/rotate.c                          */
/* -------------------------------------------------------------------------- */
int	rotate_a(t_data *data);
int	rotate_b(t_data *data);
int	rotate_r(t_data *data);

/* -------------------------------------------------------------------------- */
/*                       FILE = src_bonus/init_struct.c                       */
/* -------------------------------------------------------------------------- */
bool	init_struct(int stack_size);
void	init_cost(t_cost *cost);
void	init_tmp(t_tmp *tmp);


#endif
