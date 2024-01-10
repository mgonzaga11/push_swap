/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonzaga <mgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:29:51 by mgonzaga          #+#    #+#             */
/*   Updated: 2023/12/06 19:25:28 by mgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list		var;

	var.a_arg_count = argc - 1;
	if (check_arg(argv) == 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	malloc_var(&var);
	if (var.a_malloc_int == NULL)
		return (1);
	put_numbers(argv, &var);
	if (var.a_malloc_int == NULL)
		return (1);
	if (numbers_verify(&var) == 1)
		return (1);
	define_index(&var);
	if (ordened(&var) == 1)
		push_swap_function(&var);
	malloc_free (&var);
}

int	numbers_verify(t_list *var)
{
	int			i;
	int			j;

	i = 0;
	while (i < var->a_arg_count)
	{
		j = i + 1;
		while (j < var->a_arg_count)
		{
			if (var->a_malloc_int[i] == var->a_malloc_int[j])
			{
				ft_printf("Error\n");
				malloc_free(var);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	put_numbers(char **argv, t_list *var)
{
	long int	number;
	int			i;

	i = 0;
	while (argv[i + 1] != NULL)
	{
		number = 0;
		number = ft_atol(argv[i + 1]);
		var->a_malloc_int[i] = number;
		if (number < INT_MIN || number > INT_MAX)
		{
			ft_printf("Error\n");
			malloc_free(var);
		}
		i++;
	}
}

int	check_arg(char **arg)
{
	int	count;
	int	line;

	line = 1;
	while (arg[line])
	{
		count = 0;
		if (arg[line][0] == '\0')
			return (1);
		if (arg[line][0] == '-')
			count++;
		while (arg[line][count])
		{
			if (arg[line][count] >= '0' && arg[line][count] <= '9')
				count++;
			else
			{
				return (1);
			}
		}
		line++;
	}
	return (0);
}

void	push_swap_function(t_list *var)
{
	if (var->a_arg_count == 2)
		swap_a(var);
	else if (var->a_arg_count == 3)
		sort_three(var);
	else if (var->a_arg_count <= 5)
		sort_five(var);
	else if (var->a_arg_count > 5)
		radix_function(var, var->a_arg_count);
}
