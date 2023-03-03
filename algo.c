/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 01:15:45 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/03 05:09:40 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

int	parsing_index(int nb, int stack_size)
{
	t_data	*data;
	int	i;

	data = _data();
	i = 0;
	while (i < stack_size)
	{
		if (nb > data->stack_a[i] && nb < data->stack_a[i + 1])
			break;
		i++;
	}
	if (i == stack_size)
		data->index = 0;
	else
		data->index = i;
	return (1);
}

int	insert_sort(void)
{
	t_data	*data;
	int		i;

	data = _data();
	parsing_index(data->stack_b[0], data->len_a);
	i = 0;
	while (i < data->index)
	{
		rotate_a(data);
		i++;
	}
	return (1);
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
	}
	return (1);
}
