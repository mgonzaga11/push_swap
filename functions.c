/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonzaga <mgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:44:17 by mgonzaga          #+#    #+#             */
/*   Updated: 2023/12/06 18:54:18 by mgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list *var)
{
	int	first;
	int	second;
	int	third;

	first = var->a_malloc_int[0];
	second = var->a_malloc_int[1];
	third = var->a_malloc_int[2];
	if (first < second && second > third && first < third)
	{
		swap_a(var);
		rotate_a(var);
	}
	else if (first < second && first > third && second > third)
		reverse_rotate_a(var);
	else if (first > second && first < third && second < third)
		swap_a(var);
	else if (first > second && second > third && third < second)
	{
		swap_a(var);
		reverse_rotate_a(var);
	}
	else if (first > second && second < third && third > second)
		rotate_a(var);
}

void	sort_five(t_list *var)
{
	int	z;
	int	o;

	z = number_zero(var);
	put_first(z, var);
	if (var->a_arg_count > 3)
	{
		o = number_one(var);
		put_first(o, var);
	}
	sort_three(var);
	push_a(var);
	if (var->b_arg_count != 0)
		push_a(var);
}

void	put_first(int z, t_list *var)
{
	if (z == 1)
		swap_a(var);
	if (z == 2)
	{
		rotate_a(var);
		swap_a(var);
	}
	if (var->a_arg_count == 5)
	{
		if (z == 3)
		{
			reverse_rotate_a(var);
			reverse_rotate_a(var);
		}
		if (z == 4)
			reverse_rotate_a(var);
	}
	else
	{
		if (z == 3)
			reverse_rotate_a(var);
	}
	push_b(var);
}

int	number_zero(t_list *var)
{
	int	i;

	i = 0;
	while (i < var->a_arg_count)
	{
		if (var->a_index[i] == 0)
			return (i);
		i++;
	}
	return (i);
}

int	number_one(t_list *var)
{
	int	i;

	i = 0;
	while (i < var->a_arg_count)
	{
		if (var->a_index[i] == 1)
			return (i);
		i++;
	}
	return (i);
}
