/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 02:03:16 by tschecro          #+#    #+#             */
/*   Updated: 2023/02/18 00:54:19 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "push_swap.h"


void	init_struct(int ac, char **av)
{
	t_data	*data;
	
	data = _data();
	data->stack_a = init_stack(ac, av);
	data->stack_b = malloc(sizeof(int) * (ac - 1));
	data->len_a = ac - 1;
	data->len_b = ac - 1;
}
