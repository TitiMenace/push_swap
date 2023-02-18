/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 08:02:56 by tschecro          #+#    #+#             */
/*   Updated: 2023/02/18 00:53:55 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "push_swap.h"


int	check_av(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '-' || (str[i] >= '0' && str[i] <= '9'))
		i++;
	else
		return (-1);
	while (str[i] && str[i] > '0' && str[i] < '9')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (-1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;

	while (str[i])
		i++;
	return (i);
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
	{
		if (count < 11)
			return (1);
		if (count > 11)
			return (-1);
		else
			return (ft_strcmp(min, str));
	}
	else
	{
		if (count < 10)
			return (1);
		if (count > 10)
			return (-1);
		else
			return (ft_strcmp(max, str));
	}
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
	while(str[i])
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (sign * result);
}



int	*init_stack(int ac, char **str)
{
	int	*stack_a;
	int	i;

	stack_a = malloc(sizeof(int) * ac);
	if (!stack_a)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (check_av(str[i]) == -1)
		{
			free(stack_a);
			return (NULL);
		}
		if (check_m(str[i]) < 0)
		{
			free(stack_a);
			return (NULL);
		}
		stack_a[i] = ft_atoi(str[i]);
		i++;
	}
	return (stack_a);
}
