/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 01:28:01 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/15 02:07:41 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

int	parsing_val_max(int stack_size)
{
	t_data	*data;

	data = _data();
	if (data->pos_max == stack_size - 1)
	{
		data->index = 0;
		return (1);
	}
	else
	{
		if (data->pos_max == 0)
		{
			data->index = 1;
			return (1);
		}
		data->index = data->pos_max + 1;
		return (1);
	}
	return (0);
}

int	parsing_val_min(void)
{
	t_data	*data;

	data = _data();
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

int	init_index(int i, int count, int stack_size, int nb)
{
	t_data	*data;

	data = _data();
	while (count < stack_size)
	{
		if (i == stack_size - 1 && (nb >= data->stack_a[i]
				&& nb <= data->stack_a[0]))
		{
			i = -1;
			break ;
		}
		else if (i == stack_size - 1)
		{
			i = 0;
			count++;
			continue ;
		}
		else if (nb >= data->stack_a[i] && nb <= data->stack_a[i + 1])
			break ;
		count++;
		i++;
	}
	return (i);
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
	if (nb >= data->val_max)
		return (parsing_val_max(stack_size));
	if (nb <= data->val_min)
		return (parsing_val_min());
	count = 0;
	i = init_index(i, count, stack_size, nb);
	if (i == stack_size - 1 && (!(nb >= data->stack_a[i]
				&& nb <= data->stack_a[i + 1])))
		i = 0;
	data->index = i + 1;
	return (1);
}
