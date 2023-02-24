/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 04:33:59 by tschecro          #+#    #+#             */
/*   Updated: 2023/02/24 20:07:58 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

int	rotate_a(t_data *data)
{
	if (data->stack_a)
	{
		data->stack_a = add_back(data->stack_a, data->len_a, data->stack_a[0]);
		if (!data->stack_a)
			return (0);
		data->len_a++;
		data->stack_a = del_front(data->stack_a, data->len_a);
		if (!data->stack_a)
			return (0);
		data->len_a--;
	}
	else
		return (0);
	return (write(1, "ra\n", 3));
}

int	rotate_b(t_data *data)
{
	if (data->stack_b)
	{
		data->stack_b = add_back(data->stack_b, data->len_b, data->stack_b[0]);
		if (!data->stack_b)
			return (0);
		data->len_b++;
		data->stack_b = del_front(data->stack_b, data->len_b);
		if (!data->stack_b)
			return (0);
		data->len_b--;
	}
	else
		return (0);
	return (write(1, "rb\n", 3));
}
