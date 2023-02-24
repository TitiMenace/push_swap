/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:47:53 by tschecro          #+#    #+#             */
/*   Updated: 2023/02/24 20:57:33 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"


int	main(int ac, char **av)
{
	t_data	*data;
	int		i;

	if (ac < 2)
	{
		write(1,"Missing Args !", 14);
		return (-1);
	}
	init_struct(ac, av);
	data = _data();
	data->stack_a = init_stack(ac, av);
	if (!data->stack_a)
	{
		write(1, "Wrong Args !", 12);
		return (-1);
	}
	i = 0;
	while (i < ac - 1)
	{
		ft_putnbr(data->stack_a[i]);
		write(1, " ", 1);
		i++;
	}
	return (1);
}
