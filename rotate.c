/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonzaga <mgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:55:05 by mgonzaga          #+#    #+#             */
/*   Updated: 2023/12/06 19:09:10 by mgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list *var)
{
	int	temp;
	int	temp_index;
	int	i;

	i = 0;
	if (var->a_arg_count < 2)
		return ;
	temp = var->a_malloc_int[0];
	temp_index = var->a_index[0];
	while (i < var->a_arg_count - 1)
	{
		var->a_malloc_int[i] = var->a_malloc_int[i + 1];
		var->a_index[i] = var->a_index[i + 1];
		i++;
	}
	var->a_malloc_int[var->a_arg_count - 1] = temp;
	var->a_index[var->a_arg_count - 1] = temp_index;
	ft_printf("ra\n");
}

void	rotate_b(t_list *var)
{
	int	temp;
	int	temp_index;
	int	i;

	i = 0;
	if (var->b_arg_count < 2)
		return ;
	temp = var->b_malloc_int[0];
	temp_index = var->b_index[0];
	while (i < var->b_arg_count)
	{
		var->b_malloc_int[i] = var->b_malloc_int[i + 1];
		var->b_index[i] = var->b_index[i + 1];
		i++;
	}
	var->b_malloc_int[var->b_arg_count - 1] = temp;
	var->b_index[var->b_arg_count - 1] = temp_index;
	ft_printf ("rb\n");
}

void	rotate_a_b(t_list *var)
{
	int	temp;
	int	temp_index;
	int	i;

	i = 0;
	if (var->a_arg_count < 2 || var->b_arg_count < 2)
		return ;
	temp = var->a_malloc_int[0];
	temp_index = var->a_index[0];
	while (i < var->a_arg_count - 1)
	{
		var->a_malloc_int[i] = var->a_malloc_int[i + 1];
		var->a_index[i] = var->a_index[i + 1];
		i++;
	}
	var->a_malloc_int[var->a_arg_count - 1] = temp;
	var->a_index[var->a_arg_count - 1] = temp_index;
	rotate_rot(var);
	ft_printf("rr\n");
}

void	rotate_rot(t_list *var)
{
	int	temp;
	int	temp_index;
	int	i;

	i = 0;
	temp = var->b_malloc_int[0];
	temp_index = var->b_index[0];
	while (i < var->b_arg_count)
	{
		var->b_malloc_int[i] = var->b_malloc_int[i + 1];
		var->b_index[i] = var->b_index[i + 1];
		i++;
	}
	var->b_malloc_int[var->b_arg_count - 1] = temp;
	var->b_index[var->b_arg_count - 1] = temp_index;
}
