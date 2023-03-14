/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_calcul.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 23:33:12 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/14 04:36:27 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

int	struct_cost(t_cost *cost, t_tmp *tmp, int best_move)
{
	if ( best_move == tmp->tmp_ra + tmp->tmp_rrb)
	{
		cost->ra = tmp->tmp_ra;
		cost->rrb = tmp->tmp_rrb;
		cost->rb = 0;
		cost->rra = 0;
	}
	else if (best_move == max(tmp->tmp_ra, tmp->tmp_rb))
	{
		cost->ra = tmp->tmp_ra;
		cost->rb = tmp->tmp_rb;
		cost->rra = 0;
		cost->rrb = 0;
	}
	else if (best_move == max(tmp->tmp_rra, tmp->tmp_rrb))
	{
		cost->rra = tmp->tmp_rra;
		cost->rrb = tmp->tmp_rrb;
		cost->ra = 0;
		cost->rb = 0;
	}
	else if (best_move == tmp->tmp_rra + tmp->tmp_rb)
	{
		cost->rra = tmp->tmp_rra;
		cost->rb = tmp->tmp_rb;
		cost->ra = 0;
		cost->rrb = 0;
	}
	return (1);
}


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

int	setup_stacks(t_cost *cost)
{
	t_data	*data;

	data = _data();
	//dprintf(2, "%d%d", cost->ra, cost->rb);
	while (cost->ra != 0 && cost->rb != 0)
	{
		rotate_r(data);
		cost->ra--;
		cost->rb--;
	}
	while (cost->rra != 0 && cost->rrb != 0)
	{
		reverse_rotate_r(data);
		cost->rra--;
		cost->rrb--;
	}
	while (cost->ra != 0)
	{
		rotate_a(data);
		cost->ra--;
		write(1, "ra\n", 3);
	}	
	while (cost->rb != 0)
	{
		rotate_b(data);
		cost->rb--;
		write(1, "rb\n", 3);
	}	
	while (cost->rra != 0)
	{
		reverse_rotate_a(data);
		cost->rra--;
		write(1, "rra\n", 4);
	}	
	while (cost->rrb != 0)
	{
		reverse_rotate_b(data);
		cost->rrb--;
		write(1, "rrb\n", 4);
	}
	return (0);
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
//	dprintf(2, "\nindex choosed :%d\n", cost.index_nb);
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
//	dprintf(2, "count : %d\n", count);
	count = best_moves(&tmp);
	if (cost->moves == -1 || count < cost->moves)
	{
		cost->moves = count;
		cost->index_nb = index;
		struct_cost(cost, &tmp, count);
	}
	return (1);
}
