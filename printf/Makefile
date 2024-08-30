# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/14 15:03:52 by dyao              #+#    #+#              #
#    Updated: 2024/06/27 00:03:25 by dyao             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS         = ./ft_bzero.c ./ft_char.c ./ft_decimal.c ./ft_hexnbr.c ./ft_isalpha.c ./ft_itoa.c ./ft_memset.c \
./ft_pointer.c ./ft_percent.c ./ft_printf.c ./ft_putchar.c ./ft_putstr.c ./ft_string.c ./ft_strchr.c ./ft_unsigned.c
LIBFTDIR	= 	libft/

LIBFTOBJS	= 	libft.a
OBJS		= 	$(SRCS:.c=.o)

CC			= 	cc
RM			= 	rm -f
CCFLAGS		= 	-Wall -Werror -Wextra -I.

NAME		= 	libftprintf.a

all:			libft_build $(NAME)

$(NAME):		$(OBJS)
				cp $(LIBFTDIR)$(LIBFTOBJS) $(NAME)
				ar rcs $(NAME) $(OBJS)

libft_build:
				$(MAKE) -C $(LIBFTDIR)

clean:
				$(RM) $(OBJS)
				cd $(LIBFTDIR) && $(MAKE) clean

fclean:			clean
				$(RM) $(NAME)
				cd $(LIBFTDIR) && $(MAKE) fclean

re:				fclean all

.PHONY:			all clean fclean re $(LIBFTDIR)
