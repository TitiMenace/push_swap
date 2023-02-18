/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 04:33:59 by tschecro          #+#    #+#             */
/*   Updated: 2023/02/18 01:16:36 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "push_swap.h"

int	rotate_a(t_data *data)
{
	if (data->stack_a)
	{
		data->stack_a = add_back(data->stack_a, data->len_a, data->stack_a[0]);
		
	}
}
