# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wchen <wchen@42studen>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 10:56:47 by wchen             #+#    #+#              #
#    Updated: 2022/11/24 22:37:15 by wchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	minitalk
SERVER			=	server
CLIENT			=	client

CC				=	cc
CFLAGS			=	-Wall -Wextra -Werror -I $(INCLUDES_DIR)

# MAIN			=	./srcs/push_swap/main.c
# MAIN_OBJ		=	$(MAIN:.c=.o)

INCLUDES_DIR	=	./includes
INCLUDES		=	$(addprefix $(INCLUDES_DIR),/ft_printf.h	\
												)				\
##libft
LIBFT_DIR		=	./libft/
LIBFT			=	$(LIBFT_DIR)libft.a

##ft_printf
PF_DIR		=	./srcs/ft_printf
PF_SRCS		=	$(addprefix $(PF_DIR),/ft_printf.c		\
									/print_char.c		\
									/print_str.c		\
									/print_int.c		\
									/print_unint.c		\
									/print_x.c			\
									/print_bx.c			\
									/print_ptr.c		\
									)
PF_OBJS		= 	$(PF_SRCS:.c=.o)
PRINTF		=	./srcs/ft_printf/libftprintf.a

##mini_talk
MT_DIR			=	./srcs/mini_talk
SERVER_SRCS			=	$(addprefix $(MT_DIR),/server.c		\
										/msg_exit.c			\
										)
CLIENT_SRCS			=	$(addprefix $(MT_DIR),/client.c		\
										/msg_exit.c			\
										)

SERVER_OBJS	=	$(SERVER_SRCS:.c=.o)
CLIENT_OBJS	=	$(CLIENT_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(SERVER) $(CLIENT)

$(SERVER): $(PRINTF) $(SERVER_OBJS)
	$(CC) $(CFLAGS) $(SERVER_OBJS) $(PRINTF) $(LIBFT) -o $@

$(CLIENT): $(PRINTF) $(CLIENT_OBJS)
	$(CC) $(CFLAGS) $(CLIENT_OBJS) $(PRINTF) $(LIBFT) -o $@

$(PRINTF): $(LIBFT) $(PF_OBJS)
	cp		libft/libft.a srcs/ft_printf
	mv		srcs/ft_printf/libft.a srcs/ft_printf/libftprintf.a
	ar rcs $(PRINTF) $(PF_OBJS)

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	make clean -C $(LIBFT_DIR)
	rm -f ${MAIN_OBJ}
	rm -f ${PF_OBJS}
	rm -f ${MT_OBJS}
	rm -f $(SERVER_OBJS)
	rm -f $(CLIENT_OBJS)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	rm -f ${PRINTF}
	rm -f $(SERVER) $(CLIENT)

re: fclean all

