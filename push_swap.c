/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonzaga <mgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:29:51 by mgonzaga          #+#    #+#             */
/*   Updated: 2023/11/27 19:46:00 by mgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct s_list
{
	int	arg_count;
}t_list;

int	main(int argc, char **argv)
{
	t_list		a;
	int			*malloc_int;
	long int	number;
	int			i;

	a.arg_count = argc - 1;
	i = 0;
	if (check_arg(argv) == 1)
	{
		ft_printf("error\n");
		return (1);
	}
	malloc_int = (int *)malloc(a.arg_count * sizeof(int));
	while (argv[i + 1] != NULL)
	{
		number = 0;
		number = ft_atol(argv[i + 1]);
		malloc_int[i] = number;
		if (number < INT_MIN || number > INT_MAX)
		{
			ft_printf("error\n");
			free(malloc_int);
			return (1);
		}
		i++;
	}
}

int	check_arg(char **arg)
{
	int	count;
	int	line;

	count = 0;
	line = 1;
	while (arg[line])
	{
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