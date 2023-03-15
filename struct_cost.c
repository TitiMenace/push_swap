/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_cost.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 02:26:46 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/15 02:32:51 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

void	pattern_1(t_cost *cost, t_tmp *tmp)
{
	cost->ra = tmp->tmp_ra;
	cost->rrb = tmp->tmp_rrb;
	cost->rb = 0;
	cost->rra = 0;
}

void	pattern_2(t_cost *cost, t_tmp *tmp)
{
	cost->ra = tmp->tmp_ra;
	cost->rb = tmp->tmp_rb;
	cost->rra = 0;
	cost->rrb = 0;
}

void	pattern_3(t_cost *cost, t_tmp *tmp)
{
	cost->rra = tmp->tmp_rra;
	cost->rrb = tmp->tmp_rrb;
	cost->ra = 0;
	cost->rb = 0;
}

void	pattern_4(t_cost *cost, t_tmp *tmp)
{
	cost->rra = tmp->tmp_rra;
	cost->rb = tmp->tmp_rb;
	cost->ra = 0;
	cost->rrb = 0;
}

int	struct_cost(t_cost *cost, t_tmp *tmp, int best_move)
{
	if ( best_move == tmp->tmp_ra + tmp->tmp_rrb)
		pattern_1(cost, tmp);
	else if (best_move == max(tmp->tmp_ra, tmp->tmp_rb))
		pattern_2(cost, tmp);
	else if (best_move == max(tmp->tmp_rra, tmp->tmp_rrb))
		pattern_3(cost, tmp);
	else if (best_move == tmp->tmp_rra + tmp->tmp_rb)
		pattern_4(cost, tmp);
	return (1);
}
