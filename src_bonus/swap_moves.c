/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 05:23:50 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/16 01:56:50 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

int	swap_a(t_data *data)
{
	int	temp;

	if (!data->stack_a)
		return (0);
	temp = data->stack_a[0];
	data->stack_a[0] = data->stack_a[1];
	data->stack_a[1] = temp;
	return (1);
}

int	swap_b(t_data *data)
{
	int	temp;

	if (!data->stack_b)
		return (0);
	temp = data->stack_b[0];
	data->stack_b[0] = data->stack_b[1];
	data->stack_b[1] = temp;
	return (1);
}

int	swap_s(t_data *data)
{
	swap_a(data);
	swap_b(data);
	return (1);
}
