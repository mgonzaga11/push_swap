# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgonzaga <mgonzaga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 18:54:51 by mgonzaga          #+#    #+#              #
#    Updated: 2023/12/06 19:08:16 by mgonzaga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

FT_PRINTF		=	ft_printf/libftprintf.a

FILES	=	ft_atol.c functions.c push_swap.c push.c radix.c \
			reverse_rotate.c rotate.c swap.c utils.c
			
OBJECTS		=	$(FILES:%.c=%.o)

FLAGS		=	-Wall -Werror -Wextra -g

%.o: %.c
	cc $(FLAGS) -c $< -o $@ -I ft_printf

all: $(NAME)

$(NAME): $(OBJECTS) $(FT_PRINTF)
	cc $(FLAGS) $^ -o $@ -I ft_printf

$(FT_PRINTF):
	make -C ft_printf

clean:
	rm -f $(OBJECTS)

fclean: clean
	make fclean -C ft_printf
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re