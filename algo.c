/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 01:15:45 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/12 05:14:54 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

void	rotate_stack(void)
{
	t_data *data;
	int	i;

	data = _data();
	find_min();
	i = 0;
	dprintf(2, "\ntest->posmin : %d\n", data->pos_min);
	if (data->pos_min  < (data->len_a / 2) + 1)
	{
		while (i < data->pos_min)
		{	
			rotate_a(data);
 			i++;
		}
	}
	else
	{
		i = data->pos_min;
		while (i < data->len_a)
		{
			reverse_rotate_a(data);
			i++;
		}
	}
}

int	parsing_index(int nb, int stack_size)
{
	t_data	*data;
	int		i;
	int		count;

	data = _data();
	find_min();
	find_max();
	i = data->pos_min;
	dprintf(2, "\nval min : %d\n", data->val_min);
	dprintf(2, "pos min : %d\n", data->pos_min);
	dprintf(2, "val max : %d\n", data->val_max);
	dprintf(2, "pos max : %d\n", data->pos_max);
	if (nb >= data->val_max)
	{
		if (data->pos_max == stack_size - 1)
		{
			data->index = 0;
			return (1);
		}
		else
		{
			if (data->pos_max == 0)
			{
				data->index = stack_size + 1;
				return (1);
			}
			data->index = data->pos_max + 1;
			return (1);
		}
	}	
	if (nb <= data->val_min)
	{
		if (data->pos_min == 0)
		{
			data->index = 0;
			return (1);
		}
		else
		{
			data->index = data->pos_min;
			return (1);
		}
	}
	count = 0;
	while (count < stack_size)
	{
		if (i == stack_size - 1 && (nb >= data->stack_a[i] && nb <= data->stack_a[0]))
		{
			i = -1;
			break;
		}
		else if (i == stack_size - 1)
		{
			i = 0;
			count++;
			continue;
		}
		else if (nb >= data->stack_a[i] && nb <= data->stack_a[i + 1])
			break;
		count++;
		i++;
	}
	if (i == stack_size - 1 && (!(nb >= data->stack_a[i] && nb <= data->stack_a[i + 1])))
		i = 0;
	data->index = i + 1;
	return (1);
}

int	insert_sort(void)
{
	t_data	*data;
	int		i;
	int index;

	data = _data();
	index = cost_loop();
	parsing_index(data->stack_b[0], data->len_a);
	i = 0;
	dprintf(2, "\nindex : %d\n", data->index);
	if (data->index < (data->len_a / 2) + 1)
	{
		while (i < data->index)
		{
			rotate_a(data);
			i++;
		}
	}
	else
	{	
		i = data->index;
		while (i < data->len_a)
		{
			reverse_rotate_a(data);
			i++;
		}
	}
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
		print_stacks(data->stack_a, data->stack_b, data->len_a, data->len_b);
	}
	rotate_stack();
	return (1);
}
