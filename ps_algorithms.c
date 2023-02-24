/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algorithms.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 22:08:34 by tschecro          #+#    #+#             */
/*   Updated: 2023/02/24 22:52:22 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

int	three_params(void)
{
	t_data	*data;

	data = _data();
	if (data->stack_a[0] > data->stack_a[1] && data->stack_a[1] < data->stack_a[2])
		rotate_a(data);
	if (data->stack_a[0] < data->stack_a[1])
		swap_a(data);
	if (data->stack_a[1] > data->stack_a[2])
		reverse_rotate_a(data);
	if (data->stack_a[0] > data->stack_a[1])
		swap_a(data);
	return (1);
}
