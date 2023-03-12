/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 02:03:16 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/12 05:39:46 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"


bool	init_struct(int stack_size)
{
	t_data	*data;
	
	data = _data();
	data->stack_a = malloc(sizeof(int) * stack_size);
	if (!data->stack_a)
		return (false);
	data->stack_b = malloc(sizeof(int) * stack_size);
	if (!data->stack_b)
		return (free(data->stack_a), false);
	data->len_a = stack_size;
	data->len_b = 0;
	data->index = 0;
	data->val_min = 0;
	data->pos_min = 0;
	data->val_max = 0;
	data->pos_max = 0;
	return (true);
}

void	init_cost(t_cost *cost)
{
	cost->moves = -1;
	cost->index_nb = -1;
	return ;
}
