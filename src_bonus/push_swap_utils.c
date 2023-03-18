/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:56:24 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/18 02:42:51 by tschecro         ###   ########.fr       */
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
		while (j < stack_size)
		{
			if (stack_a[i] == stack_a[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

int	max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	i;

	i = 0;
	if (nb < 0)
	{
		i = nb * -1;
		ft_putchar('-');
	}
	else
		i = nb;
	if (i <= 9)
		ft_putchar(i + '0');
	else
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
}
