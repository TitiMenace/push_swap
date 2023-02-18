/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 05:23:50 by tschecro          #+#    #+#             */
/*   Updated: 2023/02/18 01:06:21 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "push_swap.h"


int	swap_a(t_data *data)
{
	int	temp;

	if (!data->stack_a)
		return (0);
	temp = data->stack_a[0];
	data->stack_a[0] = data->stack_a[1];
	data->stack_a[1] = temp;
	return (write(1, "sa\n", 3));
}

int	swap_b(t_data *data)
{
	int	temp;

	if (!data->stack_b)
		return (0);
	temp = data->stack_b[0];
	data->stack_b[0] = data->stack_b[1];
	data->stack_b[1] = temp;
	return (write(1, "sb\n", 3));
}
