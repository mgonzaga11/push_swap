/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonzaga <mgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:21:13 by mgonzaga          #+#    #+#             */
/*   Updated: 2023/12/06 18:32:37 by mgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	define_index(t_list *var)
{
	int	first_index;
	int	second_index;

	first_index = 0;
	second_index = 0;
	while (first_index < var->a_arg_count)
	{
		var->a_index[first_index] = 0;
		second_index = 0;
		while (second_index < var->a_arg_count)
		{
			if (var->a_malloc_int[first_index] > \
				var->a_malloc_int[second_index])
					var->a_index[first_index] = var->a_index[first_index] + 1;
			second_index++;
		}
		first_index++;
	}
}

void	malloc_var(t_list *var)
{
	var->a_index = (int *)malloc(var->a_arg_count * sizeof(int));
	if (var->a_index == NULL)
	{
		ft_printf("Error\n");
		malloc_free(var);
	}
	var->a_malloc_int = (int *)malloc(var->a_arg_count * sizeof(int));
	if (var->a_malloc_int == NULL)
	{
		ft_printf("Error\n");
		malloc_free(var);
	}
	var->b_index = (int *)malloc(var->a_arg_count * sizeof(int));
	if (var->b_index == NULL)
	{
		ft_printf("Error\n");
		malloc_free(var);
	}
	var->b_malloc_int = (int *)malloc(var->a_arg_count * sizeof(int));
	if (var->b_malloc_int == NULL)
	{
		ft_printf("Error\n");
		malloc_free(var);
	}
}

void	malloc_free(t_list *var)
{
	free(var->a_malloc_int);
	free(var->b_malloc_int);
	free(var->a_index);
	free(var->b_index);
	var->a_malloc_int = NULL;
	var->b_malloc_int = NULL;
	var->a_index = NULL;
	var->b_index = NULL;
}
