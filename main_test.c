
#include "push_swap.h"
#include <stdio.h>

int	main()
{	
	t_data	*data;
	int	tab[] = {0, 1, 2, 3, 4};
	int	i;
	
	data = _data();
	data->stack_a = malloc(sizeof(int) * 5);
	data->stack_b = malloc(sizeof(int) * 5);
	data->stack_a = tab;
	data->len_a = 5;
	data->len_b = 0;
	
	i = 0;
	push(data->stack_a, data->stack_b, data->len_a, data->len_b);	
	while(i < data->len_a)
	{
		printf("%d ", data->stack_a[i]);
		i++;
	}
	while(i < data->len_b)
	{
		printf("%d ", data->stack_a[i]);
		i++;
	}
}

