/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:47:53 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/15 01:25:03 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

int	push_swap(int ac)
{
	if (ac == 4)
		three_params();
	else if (ac == 2)
		return (1);
	else if (ac == 3)
		two_params();
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
		write(1, "Missing Args !\n", 15);
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
	free(data->stack_a);
	free(data->stack_b);
	return (0);
}
