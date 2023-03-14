/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:47:53 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/13 23:50:43 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

int	push_swap(int ac)
{
	if (ac == 4)
		three_params();
	else
		algo();
	return (1);
}


int	main(int ac, char **av)
{
	t_data	*data;

	data = _data();
	if (ac < 2)
	{
		write(1,"Missing Args !\n", 15);
		return (1);
	}
	if (!init_struct(ac - 1))
		return (1);
	if (!init_stack(av))
	{
		write(1, "Wrong Args !\n", 13);
		return (1);
	}
	data->len_a = ac - 1;
	push_swap(ac);
//	print_stacks(data->stack_a, data->stack_b, data->len_a, data->len_b);
	return (0);
}
