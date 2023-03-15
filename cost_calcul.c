/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_calcul.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 23:33:12 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/15 02:32:58 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

int	best_moves(t_tmp *tmp)
{
	int	best_move;
	int pars;

	best_move = tmp->tmp_ra + tmp->tmp_rrb;
	pars = max(tmp->tmp_ra, tmp->tmp_rb);
	if (best_move > pars)
		best_move = pars;
	pars = max(tmp->tmp_rra, tmp->tmp_rrb);
	if (best_move > pars)
		best_move = pars;
	pars = tmp->tmp_rra + tmp->tmp_rb;
	if (best_move > pars)
		best_move = pars;
	return (best_move);
}

void	cost_loop(t_cost *cost)
{
	t_data	*data;
	int		i;

	data = _data();
	i = 0;
	while (i < data->len_b)
	{
		cost_calcul(data->stack_b[i], i, cost);
		i++;
	}
}

int	cost_calcul(int value, int index, t_cost *cost)
{
	int		count;
	t_tmp	tmp;
	t_data	*data;

	data = _data();
	init_tmp(&tmp);
	count = 0;
	tmp.tmp_rb = index;
	tmp.tmp_rrb = data->len_b - index; 
	parsing_index(value, data->len_a);
	tmp.tmp_ra = data->index;
	tmp.tmp_rra = data->len_a - data->index;
	count = best_moves(&tmp);
	if (cost->moves == -1 || count < cost->moves)
	{
		cost->moves = count;
		cost->index_nb = index;
		struct_cost(cost, &tmp, count);
	}
	return (1);
}
