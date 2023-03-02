/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 03:11:39 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/02 03:14:46 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

void	print_tab(int *stack, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dprintf(2, "-%d-", stack[i]);
		i++;
	}
}
