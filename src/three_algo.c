/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 22:08:34 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/18 00:20:44 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

int	two_params(void)
{
	t_data	*data;

	data = _data();
	if (data->stack_a[0] > data->stack_a[1])
	{
		swap_a(data);
		write(1, "sa\n", 3);
	}
	return (1);
}

int	three_pattern_1(void)
{
	t_data	*data;

	data = _data();
	if (data->stack_a[0] < data->stack_a[2]
		&& data->stack_a[1] > data->stack_a[2])
	{
		reverse_rotate_a(data);
		write(1, "rra\n", 4);
		swap_a(data);
		write(1, "sa\n", 3);
		return (1);
	}
	if (data->stack_a[0] > data->stack_a[2])
	{
		reverse_rotate_a(data);
		return (write(1, "rra\n", 4));
	}
	return (0);
}

int	three_pattern_2(void)
{
	t_data	*data;

	data = _data();
	if (data->stack_a[1] < data->stack_a[2])
	{
		if (data->stack_a[0] > data->stack_a[2])
		{
			rotate_a(data);
			return (write(1, "ra\n", 3));
		}
		else
		{
			swap_a(data);
			return (write(1, "sa\n", 3));
		}
	}
	else
	{
		rotate_a(data);
		write(1, "ra\n", 3);
		swap_a(data);
		write(1, "sa\n", 3);
		return (1);
	}
	return (0);
}

int	three_params(void)
{
	t_data	*data;

	data = _data();
	if (data->stack_a[0] < data->stack_a[1])
		return (three_pattern_1());
	else
		return (three_pattern_2());
	return (0);
}
