/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonzaga <mgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:26:43 by mgonzaga          #+#    #+#             */
/*   Updated: 2023/12/06 18:35:22 by mgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	radix_number(t_list *var)
{
	int	max_number;
	int	qtd_digits;

	qtd_digits = 0;
	max_number = var->a_arg_count - 1;
	while (max_number != 0)
	{
		max_number = max_number / 2;
		qtd_digits++;
	}
	return (qtd_digits);
}

void	radix_function(t_list *var, int qtd_numbers)
{
	int	qtd_times;
	int	i;
	int	j;

	i = 0;
	qtd_times = radix_number(var);
	while (i < qtd_times)
	{
		j = 0;
		while (j < qtd_numbers)
		{
			if (((var->a_index[0] >> i) & 1) == 1)
				rotate_a(var);
			else
				push_b(var);
			j++;
		}
		while (var->b_arg_count > 0)
			push_a(var);
		i++;
	}
}

int	ordened(t_list *var)
{
	int	i;

	i = 0;
	while (i < var->a_arg_count - 1)
	{
		if (i != var->a_index[i])
			return (1);
		i++;
	}
	return (0);
}
