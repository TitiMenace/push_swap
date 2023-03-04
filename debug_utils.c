/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 03:11:39 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/04 06:58:07 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

void	print_stacks(int *sa, int *sb, int la, int lb)
{
	dprintf(2, "stack_a--->");
	print_tab(sa, la);
	dprintf(2, "stack_b--->");
	print_tab(sb, lb);
}

void	print_tab(int *stack, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dprintf(2, "-%d-", stack[i]);
		dprintf(2, " ");
		i++;
	}
}
