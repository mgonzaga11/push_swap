/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonzaga <mgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:49:07 by mgonzaga          #+#    #+#             */
/*   Updated: 2023/12/06 17:18:17 by mgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list *var)
{
	int	temp;

	if (var->a_arg_count < 2)
	{
		return ;
	}
	temp = var->a_malloc_int[0];
	var->a_malloc_int[0] = var->a_malloc_int[1];
	var->a_malloc_int[1] = temp;
	temp = var->a_index[0];
	var->a_index[0] = var->a_index[1];
	var->a_index[1] = temp;
	ft_printf("sa\n");
}

void	swap_b(t_list *var)
{
	int	temp;

	if (var->b_arg_count < 2)
	{
		return ;
	}
	temp = var->b_malloc_int[0];
	var->b_malloc_int[0] = var->b_malloc_int[1];
	var->b_malloc_int[1] = temp;
	temp = var->b_index[0];
	var->b_index[0] = var->b_index[1];
	var->b_index[1] = temp;
	ft_printf("sb\n");
}

void	swap_a_b(t_list *var)
{
	int	temp;

	if (var->a_arg_count < 2 || var->b_arg_count < 2)
		return ;
	temp = var->a_malloc_int[0];
	var->a_malloc_int[0] = var->a_malloc_int[1];
	var->a_malloc_int[1] = temp;
	temp = var->a_index[0];
	var->a_index[0] = var->a_index[1];
	var->a_index[1] = temp;
	temp = var->b_malloc_int[0];
	var->b_malloc_int[0] = var->b_malloc_int[1];
	var->b_malloc_int[1] = temp;
	temp = var->b_index[0];
	var->b_index[0] = var->b_index[1];
	var->b_index[1] = temp;
	ft_printf("ss\n");
}
