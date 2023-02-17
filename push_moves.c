/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 05:31:17 by tschecro          #+#    #+#             */
/*   Updated: 2023/02/17 04:45:21 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(int *stack_1, int *stack_2, int len_1, int len_2)
{
	int	i;
	int	temp;
	
	i = 0;
	while (i < len_2)
	{
		temp = stack_2[i + 1];
		stack_2[i + 1] = stack_2[i];
		i++;
	}
	stack_2[0] = stack_1[0];
	i = len_1;
	while (i > 1)
	{
		temp = stack_1[i - 1];
		stack_1[i - 1] = stack_1[i];
		i--;
	}
	((char *)stack_1)[len_2] = '\0';
}
