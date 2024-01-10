/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonzaga <mgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:12:39 by mgonzaga          #+#    #+#             */
/*   Updated: 2023/12/06 19:25:16 by mgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include "ft_printf.h"
# define INT_MIN -2147483648 
# define INT_MAX  2147483647

typedef struct s_list
{
	int	a_arg_count;
	int	b_arg_count;
	int	*a_malloc_int;
	int	*b_malloc_int;
	int	*a_index;
	int	*b_index;	
}t_list;

int		numbers_verify(t_list *var);
void	put_numbers(char **argv, t_list *var);
int		check_arg(char **arg);
void	sort_three(t_list *var);
void	define_index(t_list *var);
void	malloc_var(t_list *var);
void	malloc_free(t_list *var);
void	swap_a(t_list *var);
void	swap_b(t_list *var);
void	swap_a_b(t_list *var);
void	reverse_rotate_a(t_list *var);
void	reverse_rotate_b(t_list *var);
void	reverse_rotate_a_b(t_list *var);
void	rotate_a(t_list *var);
void	rotate_b(t_list *var);
void	rotate_a_b(t_list *var);
long	ft_atol(const char *str);
void	push_a(t_list *var);
void	push_b(t_list *var);
void	sort_five(t_list *var);
void	put_first(int z, t_list *var);
int		number_zero(t_list *var);
int		number_one(t_list *var);
int		radix_number(t_list *var);
void	radix_function(t_list *var, int qtd_numbers);
void	reverse_rot(t_list *var);
int		ordened(t_list *var);
void	rotate_rot(t_list *var);
void	push_swap_function(t_list *var);

#endif