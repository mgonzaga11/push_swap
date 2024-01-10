/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonzaga <mgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:17:17 by mgonzaga          #+#    #+#             */
/*   Updated: 2023/12/06 18:53:41 by mgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_list *var)
{
	int	temp;
	int	temp_index;
	int	i;

	i = var->a_arg_count;
	if (var->a_arg_count < 2)
		return ;
	temp = var->a_malloc_int[var->a_arg_count - 1];
	temp_index = var->a_index[var->a_arg_count - 1];
	while (i >= 1)
	{
		var->a_malloc_int[i] = var->a_malloc_int[i - 1];
		var->a_index[i] = var->a_index[i - 1];
		i--;
	}
	var->a_malloc_int[0] = temp;
	var->a_index[0] = temp_index;
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_list *var)
{
	int	temp;
	int	temp_index;
	int	i;

	i = var->b_arg_count;
	if (var->b_arg_count < 2)
		return ;
	temp = var->b_malloc_int[var->b_arg_count - 1];
	temp_index = var->b_index[var->b_arg_count - 1];
	while (i >= 1)
	{
		var->b_malloc_int[i] = var->b_malloc_int[i - 1];
		var->b_index[i] = var->b_index[i - 1];
		i--;
	}
	var->b_malloc_int[0] = temp;
	var->b_index[0] = temp_index;
	ft_printf("rrb\n");
}

void	reverse_rotate_a_b(t_list *var)
{
	int	temp;
	int	temp_index;
	int	i;

	if (var->a_arg_count < 2 || var->b_arg_count < 2)
		return ;
	i = var->a_arg_count + 1;
	temp = var->a_malloc_int[var->a_arg_count - 1];
	temp_index = var->a_index[var->a_arg_count - 1];
	while (--i >= 1)
	{
		var->a_malloc_int[i] = var->a_malloc_int[i - 1];
		var->a_index[i] = var->a_index[i - 1];
	}
	var->a_malloc_int[0] = temp;
	var->a_index[0] = temp_index;
	reverse_rot(var);
	ft_printf("rrr\n");
}

void	reverse_rot(t_list *var)
{
	int	temp;
	int	temp_index;
	int	i;

	i = var->b_arg_count + 1;
	temp = var->b_malloc_int[var->b_arg_count - 1];
	temp_index = var->b_index[var->b_arg_count - 1];
	while (--i >= 1)
	{
		var->b_malloc_int[i] = var->b_malloc_int[i - 1];
		var->b_index[i] = var->b_index[i - 1];
	}
	var->b_malloc_int[0] = temp;
	var->b_index[0] = temp_index;
}
