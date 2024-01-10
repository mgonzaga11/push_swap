/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonzaga <mgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:14:09 by mgonzaga          #+#    #+#             */
/*   Updated: 2023/12/06 17:33:58 by mgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list *var)
{
	int	i;

	i = var->a_arg_count;
	if (var->b_arg_count <= 0)
		return ;
	while (i >= 1)
	{
		var->a_malloc_int[i] = var->a_malloc_int[i - 1];
		var->a_index[i] = var->a_index[i - 1];
		i--;
	}
	var->a_malloc_int[0] = var->b_malloc_int[0];
	var->a_index[0] = var->b_index[0];
	i = 0;
	while (i < var->b_arg_count)
	{
		var->b_malloc_int[i] = var->b_malloc_int[i + 1];
		var->b_index[i] = var->b_index[i + 1];
		i++;
	}
	var->b_arg_count--;
	var->a_arg_count++;
	ft_printf("pa\n");
}

void	push_b(t_list *var)
{
	int	i;

	i = var->b_arg_count;
	if (var->a_arg_count <= 0)
		return ;
	while (i >= 1)
	{
		var->b_malloc_int[i] = var->b_malloc_int[i - 1];
		var->b_index[i] = var->b_index[i - 1];
		i--;
	}
	var->b_malloc_int[0] = var->a_malloc_int[0];
	var->b_index[0] = var->a_index[0];
	i = 0;
	while (i < var->a_arg_count)
	{
		var->a_malloc_int[i] = var->a_malloc_int[i + 1];
		var->a_index[i] = var->a_index[i + 1];
		i++;
	}
	var->b_arg_count++;
	var->a_arg_count--;
	ft_printf("pb\n");
}
