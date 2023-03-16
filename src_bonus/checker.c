/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 06:30:08 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/16 05:34:03 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"
#include "ft_push_swap.h"
#include "include.h"

bool	check_sort(void)
{
	t_data	*data;
	int		i;
	int		j;

	data = _data();
	i = 0;
	j = i + 1;
	while (j < data->len_a)
	{
		if (data->stack[i] > data->stack_a[j])
		{
			write(1, "KO\n", 3);
			return (false);
		}
		i++;
		j++;
	}
	write(1, "OK\n", 3);
	return (true);
}

int	read_loop()
{
	char *str;
	char *buffer

	buffer "";
	while (str)
	{
		str = get_next_line(0);
		if (!check_instructions)
		{
			write(1, "Error\n", 6);
			return (free(str), free(buffer));
		}
		if (*str == NULL)
		{
			check_sort();
			return (free(str), free(buffer));
		}
		buffer = ft_strcat(buffer, str);
	}
	return (free(str), free(buffer), 1);
}


int	check_instructions(char *str)
{	
	if (ft_strcmp(str, "sa") == 0)
		return(true);
	if (ft_strcmp(str, "sb") == 0)
		return(true);
	if (ft_strcmp(str, "ss") == 0)
		return (true);
	if (ft_strcmp(str, "ra") == 0)
		return (true);
	if (ft_strcmp(str, "rb") == 0)
		return (true);
	if (ft_strcmp(str, "rr") == 0)
		return (true);
	if (ft_strcmp(str, "rra") == 0)
		return (true);
	if (ft_strcmp(str, "rrb") == 0)
		return (true);
	if (ft_strcmp(str, "rrr") == 0)
		return (true);
	return (false);
}

int	main(void)
{
	t_data	*data;

	data = _data();
	if (ac < 2)
		return (1);
	if (!init_struct(ac - 1))
		return (1);
	if (!init_stack(av))
		return (write(1, "Error\n", 6));
	data->len_a = ac - 1;
	if (check_multiple(data->stack_a, data->len_a) == -1)
	{
		free(data->stack_a);
		free(data->stack_b);
		return (write(1, "Error\n", 6));
	}
	read_loop();
	free(data->stack_a);
	free(data->stack_b);
	return (0);
}
