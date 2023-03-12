/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_calcul.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 23:33:12 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/12 05:06:17 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"


int	cost_loop(int value, int index)
{
	t_cost	cost;
	t_data	*data();
	int		i;

	data = _data();
	init_cost(&cost);
	i = 0;
	while (i < data->len_b)
	{
		cost(data->stack[i], i, &cost);
		i++;
	}
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
	if (cost->moves == 0)
		cost->moves = count;
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
