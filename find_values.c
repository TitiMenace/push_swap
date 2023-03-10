/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_values.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 05:01:25 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/04 06:47:49 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

int	find_min(void)
{
	t_data	*data;
	int		i;
	int		nb;

	data = _data();
	nb = data->stack_a[0];
	data->pos_min = 0;
	i = 0;
	while (i < data->len_a)
	{
		if (nb > data->stack_a[i])
		{
			nb = data->stack_a[i];
			data->pos_min = i;
		}
		i++;
	}
	data->val_min = nb;
	return (1);
}

int	find_max(void)
{
	t_data	*data;
	int		i;
	int		nb;

	data = _data();
	nb = data->stack_a[0];
	data->pos_max = 0;
	i = 0;
	while (i < data->len_a)
	{
		if (nb <= data->stack_a[i])
		{
			nb = data->stack_a[i];
			data->pos_max = i;
		}
		i++;
	}
	data->val_max = nb;
	return (1);
}
