/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 01:04:49 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/27 20:23:13 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

int	check_av(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '-' || (str[i] >= '0' && str[i] <= '9'))
		i++;
	else
		return (-1);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] == '\0')
	{
		if (str[i - 1] == '-')
			return (-1);
		return (1);
	}
	else
		return (-1);
}

int	check_m(char *str)
{
	int		i;
	int		count;
	char	*max;
	char	*min;

	count = ft_strlen(str);
	max = "2147483647";
	min = "-2147483648";
	i = 0;
	if (str[i] == '-')
		return (check_min(count, min, str));
	else
		return (check_max(count, max, str));
	return (0);
}		

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	result = 0;
	while (str[i])
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (sign * result);
}

bool	init_stack(char **str)
{
	t_data	*data;
	int		i;

	data = _data();
	i = 0;
	while (str[i + 1])
	{
		if (check_av(str[i + 1]) == -1)
		{
			free(data->stack_a);
			free(data->stack_b);
			return (false);
		}
		if (check_m(str[i + 1]) < 0)
		{
			free(data->stack_a);
			free(data->stack_b);
			return (false);
		}
		data->stack_a[i] = ft_atoi(str[i + 1]);
		i++;
	}
	return (true);
}
