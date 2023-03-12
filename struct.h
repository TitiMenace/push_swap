/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 00:45:08 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/11 23:13:58 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_data
{
	int	*stack_a;
	int	*stack_b;
	int	len_a;
	int len_b;
	int index;
	int	val_min;
	int	pos_min;
	int	val_max;
	int pos_max;
}			t_data;

typedef struct s_cost
{
	int moves;
	int index_nb;
}			t_cost;

#endif

