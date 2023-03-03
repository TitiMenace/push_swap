/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 01:15:45 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/03 05:35:06 by tschecro         ###   ########.fr       */
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
	
	//check avec plusieurs variables une pour le count pour savoir quand 
	//on a parcouru toute la roue et une pour retenir l'index si on 
	//doit boucler sur le debut une nouvelle fois avec un start ou pas sur le
	//nombre le plus petit...
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
