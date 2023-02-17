/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 04:52:39 by tschecro          #+#    #+#             */
/*   Updated: 2023/02/17 04:58:02 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(int *stack, int len)
{	
	int	temp;
	int	i;

	i = 0;
	temp = stack[len];
	while (i < len)
	{
		stack[i + 1] = stack[i];
		i++;
	}
	stack[0] = temp;
}

void	reverse_rotate_r(int *stack_a, int *stack_b)
{	
	t_data	*data;
	
	data = _data();
	reverse_rotate(stack_a, data->len_a);
	reverse_rotate(stack_b, data->len_b);
}
