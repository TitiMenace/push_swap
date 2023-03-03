/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:47:53 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/03 04:52:26 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

int	push_swap(int ac)
{
	t_data	*data;

	if (ac == 4)
		three_params();
	else
		algo();
	data = _data();
	return (1);
}


int	main(int ac, char **av)
{
	t_data	*data;
	int		i;

	if (ac < 2)
	{
		write(1,"Missing Args !", 14);
		return (1);
	}
	data = _data();
	if (!init_struct(ac - 1))
		return (1);
	if (!init_stack(av))
	{
		write(1, "Wrong Args !", 12);
		return (1);
	}
	data->len_a = ac - 1;
	i = 0;
	push_swap(ac);
	dprintf(2, "stack_a--->");
	print_tab(data->stack_a, data->len_a);
	dprintf(2, "stack_b--->");
	print_tab(data->stack_b, data->len_b);
	return (0);
}
