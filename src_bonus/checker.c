/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 06:30:08 by tschecro          #+#    #+#             */
/*   Updated: 2023/03/15 07:40:32 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	read_loop()
{
	char *str;

	str = "";

	while (str)
	{
		str = get_next_line(0);
		printf("%s", str);
	}
	free(str);
	return (1);
}


/*int	checker(char *str)
{	
	if (strcmp(str, "sa") == 0)
	if (strcmp(str, "sb") == 0)
	if (strcmp(str, "ss") == 0)
	if (strcmp(str, "ra") == 0)
	if (strcmp(str, "rb") == 0)
	if (strcmp(str, "rr") == 0)
	if (strcmp(str, "rra") == 0)
	if (strcmp(str, "rrb") == 0)
	if (strcmp(str, "rrr") == 0)
}
*/

int	main(void)
{
	read_loop();
	return (0);
}
