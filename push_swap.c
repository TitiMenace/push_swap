/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:47:53 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/15 04:07:01 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

int	check_multiple(int *stack_a, int stack_size)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack_size)
	{
		j = i + 1;
		while(j < stack_size)
		{
			if (stack_a[i] == stack_a[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
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
	push_swap(ac);
	free(data->stack_a);
	free(data->stack_b);
	return (0);
}
