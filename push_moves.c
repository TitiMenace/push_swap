/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 05:31:17 by tschecro          #+#    #+#             */
/*   Updated: 2023/02/24 20:07:20 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

int	push_a(t_data *data)
{
	if (data->len_b)
	{
		data->stack_a = add_front(data->stack_a, data->len_a, data->stack_b[0]);
		if (!data->stack_a)
			return (0);
		data->len_a++;
		data->stack_b = del_front(data->stack_b, data->len_b);
		if (!data->stack_b)
			return (0);
		data->len_b--;
	}
	else
		return (0);
	return (write(1, "pa\n", 3));
}

int	push_b(t_data *data)
{
	if (data->len_a)
	{
		data->stack_b = add_front(data->stack_b, data->len_b, data->stack_a[0]);
		if (!data->stack_b)
			return (0);
		data->len_b++;
		data->stack_a = del_front(data->stack_a, data->len_a);
			if (!data->stack_a)
				return (0);
		data->len_a--;
	}
	else
		return (0);
	return (write(1, "pb\n", 3));
}
