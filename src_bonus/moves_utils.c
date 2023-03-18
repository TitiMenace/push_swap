/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:58:52 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/15 02:41:48 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

int	*add_front(int *stack, int len, int nb)
{
	int	*out;
	int	i;

	out = malloc(sizeof(int) * (len + 1));
	if (!out)
		return (NULL);
	out[0] = nb;
	i = 1;
	while (i - 1 < len)
	{
		out[i] = stack[i - 1];
		i++;
	}
	if (stack)
		free(stack);
	return (out);
}

int	*add_back(int *stack, int len, int nb)
{	
	int	*out;
	int	i;

	out = malloc(sizeof(int) * (len + 1));
	if (!out)
		return (NULL);
	i = 0;
	while (i < len)
	{
		out[i] = stack[i];
		i++;
	}
	if (stack)
		free(stack);
	out[i] = nb;
	return (out);
}

int	*del_front(int *stack, int len)
{
	int	*out;
	int	i;

	out = malloc(sizeof(int) * len - 1);
	if (!out)
		return (NULL);
	i = 0;
	while (i < len - 1)
	{
		out[i] = stack[i + 1];
		i++;
	}
	if (stack)
		free(stack);
	return (out);
}

int	*del_back(int *stack, int len)
{
	int	*out;
	int	i;

	out = malloc(sizeof(int) * len - 1);
	if (!out)
		return (NULL);
	i = 0;
	while (i < len - 1)
	{	
		out[i] = stack[i];
		i++;
	}
	if (stack)
		free(stack);
	return (out);
}
