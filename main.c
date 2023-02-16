/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 04:53:22 by tschecro          #+#    #+#             */
/*   Updated: 2023/02/16 02:15:29 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int	*stack_a;
	int	i;
	
	if (ac < 0)
		return (1);
	stack_a = init_stack(ac - 1, av + 1);
	if (!stack_a)
	{
		write(1, "Wrong Args or Malloc error !", 28);
		return (1);
	}
	i = 0;
	while (i < (ac - 1))
	{
		ft_putnbr(stack_a[i]);
		write(1, " ", 1);
		i++;
	}
	return (0);
}
