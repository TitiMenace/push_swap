/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 06:30:08 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/27 14:54:19 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "includes.h"
#include "struct.h"

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
		if (data->stack_a[i] > data->stack_a[j])
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

char	*read_loop(void)
{
	char	*str;
	char	*buffer;

	buffer = ft_strndup("\0");
	while (1)
	{
		str = get_next_line(0);
		if (!str)
			break ;
		if (!check_instructions(str))
			return (free(str), free(buffer), NULL);
		buffer = ft_strjoin(buffer, str);
		free(str);
	}
	return (buffer);
}

int	main(int ac, char **av)
{
	t_data	*data;
	char	*buffer;
	char	**actions;

	data = _data();
	if (ac < 2)
		return (1);
	if (!init_struct(ac - 1))
		return (1);
	if (!init_stack(av))
		return (write(1, "Error\n", 6));
	if (check_multiple(data->stack_a, data->len_a) == -1)
		return (write(1, "Error\n", 6));
	buffer = read_loop();
	if (!buffer)
	{
		free(data->stack_a);
		return (free(data->stack_b), write(1, "Error\n", 6));
	}
	actions = ft_split(buffer, '\n');
	exec_moves(actions, data);
	check_sort();
	free_all(actions, buffer, data->stack_a, data->stack_b);
	return (0);
}
