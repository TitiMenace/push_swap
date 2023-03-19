/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 06:30:08 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/19 02:10:15 by tschecro         ###   ########.fr       */
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

char	*read_loop()
{
	char *str;
	char *buffer;

	buffer = ft_strndup("\0");
	str = "";
	while (str)
	{
		str = get_next_line(0);
		if (!check_instructions(str))
			return(buffer);
		buffer = ft_strjoin(buffer, str);
	}
	return(buffer);
}


int	check_instructions(char *str)
{	
	if (!str)
		return (false);
	if (ft_strcmp(str, "sa\n") == 0)
		return(true);
	else if (ft_strcmp(str, "sb\n") == 0)
		return(true);
	else if (ft_strcmp(str, "ss\n") == 0)
		return (true);
	else if (ft_strcmp(str, "pb\n") == 0)
		return (true);
	else if (ft_strcmp(str, "pa\n") == 0)
		return (true);
	else if (ft_strcmp(str, "ra\n") == 0)
		return (true);
	else if (ft_strcmp(str, "rb\n") == 0)
		return (true);
	else if (ft_strcmp(str, "rr\n") == 0)
		return (true);
	else if (ft_strcmp(str, "rra\n") == 0)
		return (true);
	else if (ft_strcmp(str, "rrb\n") == 0)
		return (true);
	else if (ft_strcmp(str, "rrr\n") == 0)
		return (true);
	return (false);
}

int	instructions(char *str)
{	
	t_data	*data;

	data = _data();

	if (!str)
		return (false);
	if (ft_strcmp(str, "sa") == 0)
		return(swap_a(data));
	else if (ft_strcmp(str, "sb") == 0)
		return(swap_b(data));
	else if (ft_strcmp(str, "ss") == 0)
		return (swap_s(data));
	else if (ft_strcmp(str, "pb") == 0)
		return (push_b(data));
	else if (ft_strcmp(str, "pa") == 0)
		return (push_a(data));
	else if (ft_strcmp(str, "ra") == 0)
		return (rotate_a(data));
	else if (ft_strcmp(str, "rb") == 0)
		return (rotate_b(data));
	else if (ft_strcmp(str, "rr") == 0)
		return (rotate_r(data));
	else if (ft_strcmp(str, "rra") == 0)
		return (reverse_rotate_a(data));
	else if (ft_strcmp(str, "rrb") == 0)
		return (reverse_rotate_b(data));
	else if (ft_strcmp(str, "rrr") == 0)
		return (reverse_rotate_r(data));
	return (false);
}

int	main(int ac, char **av)
{
	t_data	*data;
	char	*buffer;
	char	**actions;
	int		i;

	i = 0;
	data = _data();
	if (ac < 2)
		return (1);
	if (!init_struct(ac - 1))
		return (1);
	if (!init_stack(av))
		return (write(1, "Error\n", 6));
	if (check_multiple(data->stack_a, data->len_a) == -1)
	{
		free(data->stack_a);
		free(data->stack_b);
		return (write(1, "Error\n", 6));
	}
	buffer = read_loop();
	actions = ft_split(buffer, '\n'); 
	while (actions[i])
	{
		instructions(actions[i]);
		i++;
	}
	check_sort();
	free(actions);
	return (0);
}
