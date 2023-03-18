/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 04:52:39 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/16 01:53:10 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

int	reverse_rotate_a(t_data *data)
{
	int	i;

	i = data->len_a - 1;
	if (data->stack_a)
	{
		data->stack_a = add_front(data->stack_a, data->len_a, data->stack_a[i]);
		if (!data->stack_a)
			return (0);
		data->len_a++;
		data->stack_a = del_back(data->stack_a, data->len_a);
		if (!data->stack_a)
			return (0);
		data->len_a--;
	}
	else
		return (0);
	return (1);
}

int	reverse_rotate_b(t_data *data)
{
	int	i;

	i = data->len_b - 1;
	if (data->stack_b)
	{
		data->stack_b = add_front(data->stack_b, data->len_b, data->stack_b[i]);
		if (!data->stack_a)
			return (0);
		data->len_b++;
		data->stack_b = del_back(data->stack_b, data->len_b);
		if (!data->stack_b)
			return (0);
		data->len_b--;
	}
	else
		return (0);
	return (1);
}

int	reverse_rotate_r(t_data *data)
{
	reverse_rotate_a(data);
	reverse_rotate_b(data);
	return (1);
}
