/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   singletone.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:14:09 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/15 01:25:40 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

void	ft_bzero(void *ptr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
}

t_data	*_data(void)
{
	static t_data	data;

	return (&data);
}
