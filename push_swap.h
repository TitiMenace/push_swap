/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 08:47:35 by tschecro          #+#    #+#             */
/*   Updated: 2023/02/17 04:51:35 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_data
{
	int	*stack_a;
	int	*stack_b;
	int	len_a;
	int len_b;
}			t_data;

int		check_av(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		*init_stack(int ac, char **str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

void	ft_bzero(void *ptr, int size);
t_data	*_data(void);
void	init_struct(int ac, char **av);

void	swap(int *stack);
void	swap_s(int *stack_a, int *stack_b);

void	rotate(int *stack, int len);
void	rotate_r(int *stack_a, int *stack_b);

void	push(int *stack_1, int *stack_2, int len_1, int len_2);
#endif
