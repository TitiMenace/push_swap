/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 04:33:59 by tschecro          #+#    #+#             */
/*   Updated: 2023/02/17 04:43:10 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(int *stack, int len)
{
	int	i;
	int	temp;
	
	i = 0;
	temp = stack[0];
	while(i < len)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[i] = temp;
}

void	rotate_r(int *stack_a, int *stack_b)
{
	t_data	*data;
	data = _data();

	rotate(stack_a, data->len_a);
	rotate(stack_b, data->len_b);
}
