/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 01:15:45 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/15 02:04:57 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

void	rotate_stack(void)
{
	t_data	*data;
	int		i;

	data = _data();
	find_min();
	i = 0;
	if (data->pos_min < (data->len_a / 2) + 1)
	{
		while (i < data->pos_min)
		{	
			rotate_a(data);
			write(1, "ra\n", 3);
			i++;
		}
	}
	else
	{
		i = data->pos_min;
		while (i < data->len_a)
		{
			reverse_rotate_a(data);
			write(1, "rra\n", 4);
			i++;
		}
	}
}

int	insert_sort(void)
{
	t_cost	cost;

	init_cost(&cost);
	cost_loop(&cost);
	setup_stacks(&cost);
	return (0);
}

int	algo(void)
{
	t_data	*data;
	int		i;

	data = _data();
	i = data->len_a;
	while (i > 3)
	{
		push_b(data);
		i--;
	}
	three_params();
	while (data->len_b > 0)
	{
		insert_sort();
		push_a(data);
	}
	rotate_stack();
	return (1);
}
