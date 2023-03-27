/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 01:15:56 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/27 20:26:34 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "includes.h"
#include "ft_push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_min(int count, char *min, char *str)
{
	if (count < 11)
		return (1);
	if (count > 11)
		return (-1);
	else
		return (ft_strcmp(min, str));
}

int	check_max(int count, char *max, char *str)
{
	if (count < 10)
		return (1);
	if (count > 10)
		return (-1);
	else
		return (ft_strcmp(max, str));
}
