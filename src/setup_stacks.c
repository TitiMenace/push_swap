/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 02:14:56 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/15 02:23:01 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

void	setup_rotate_rotate(t_cost *cost)
{
	t_data	*data;

	data = _data();
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
}

void	setup_rotates(t_cost *cost)
{
	t_data	*data;

	data = _data();
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
}

void	setup_reverse_r(t_cost *cost)
{
	t_data	*data;

	data = _data();
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
}

int	setup_stacks(t_cost *cost)
{
	t_data	*data;

	data = _data();
	setup_rotate_rotate(cost);
	setup_rotates(cost);
	setup_reverse_r(cost);
	return (0);
}
