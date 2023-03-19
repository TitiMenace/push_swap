/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:47:53 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/19 02:22:59 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

bool	check_sort(void)
{
	t_data	*data;
	int		i;
	int		j;

	data = _data();
	i = 0;
	j = i + 1;
	while (j < data->len_a)
	{
		if (data->stack_a[i] > data->stack_a[j])
			return (false);
		i++;
		j++;
	}
	return (true);
}

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
		return (1);
	if (!init_struct(ac - 1))
		return (1);
	if (!init_stack(av))
		return (write(1, "Error\n", 6));
	data->len_a = ac - 1;
	if (check_multiple(data->stack_a, data->len_a) == -1)
	{
		free(data->stack_a);
		free(data->stack_b);
		return (write(1, "Error\n", 6));
	}
	if (!check_sort())
		push_swap(ac);
	free(data->stack_a);
	free(data->stack_b);
	return (0);
}
