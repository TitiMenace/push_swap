/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 04:39:12 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/19 04:51:43 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "includes.h"
#include "struct.h"

int	check_instructions(char *str)
{	
	if (!str)
		return (false);
	if (ft_strcmp(str, "sa\n") == 0)
		return (true);
	else if (ft_strcmp(str, "sb\n") == 0)
		return (true);
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

int	instructions(char *str, t_data *data)
{	
	if (!str)
		return (false);
	if (ft_strcmp(str, "sa") == 0)
		return (swap_a(data));
	else if (ft_strcmp(str, "sb") == 0)
		return (swap_b(data));
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

int	exec_moves(char **actions, t_data *data)
{
	int	i;

	i = 0;
	while (actions[i])
	{
		instructions(actions[i], data);
		free(actions[i]);
		i++;
	}
	return (1);
}
