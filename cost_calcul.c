/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_calcul.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 23:33:12 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/12 10:54:33 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

int	rotate_stack_b(int index)
{
	t_data	*data;
	int		i;

	data = _data();
	i = 0;
	if (index < (data->len_b / 2) + 1)
	{
		while (i < index)
		{
			rotate_b(data);
			i++;
		}
	}
	else
	{
		i = index;
		while (i < data->len_b)
		{
			reverse_rotate_b(data);
			i++;
		}	
	}
	return (0);
}

int	cost_loop(void)
{
	t_cost	cost;
	t_data	*data;
	int		i;

	data = _data();
	init_cost(&cost);
	i = 0;
	while (i < data->len_b)
	{
		cost_calcul(data->stack_b[i], i, &cost);
		i++;
	}
//	dprintf(2, "\nindex choosed :%d\n", cost.index_nb);
	return (cost.index_nb);
}

int	cost_calcul(int value, int index, t_cost *cost)
{
	int	count;
	t_data	*data;

	data = _data();
	count = 0;
	if (index < (data->len_b / 2) + 1)
		count = index;
	else
		count =  data->len_b - index;
	parsing_index(value, data->len_a);
	if (data->index < (data->len_a / 2) + 1)
		count+=data->index;
	else
		count += data->len_a - data->index;
//	dprintf(2, "count : %d\n", count);
	if (cost->moves == -1)
	{
		cost->moves = count;
		cost->index_nb = index;
	}
	else
	{
		if (count < cost->moves)
		{
			cost->moves = count;
			cost->index_nb = index;
		}
	}
	return (-1);
}
