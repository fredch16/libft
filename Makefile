# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fredchar <fredchar@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/10 12:58:21 by fredchar          #+#    #+#              #
#    Updated: 2025/03/10 17:17:11 by fredchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := gcc
CFLAGS := -Wall -Wextra -Werror
INCD := includes
OBJD := obj

# Colors
GREEN := \033[0;32m
YELLOW := \033[0;33m
NC := \033[0m # No Color

# Spinner animation
SPINNER := / - \\ \|

SRCS := ft_isalnum.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_isascii.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strlen.c \
		ft_atoi.c \
		ft_memset.c \
		ft_bzero.c \
		ft_strchr.c \
		ft_strrchr.c \

OBJS := $(SRCS:%.c=$(OBJD)/%.o)

all: $(NAME)

$(OBJD)/%.o: %.c | $(OBJD)
	@i=0; \
	while [ $$i -lt 4 ]; do \
		printf "\r$(YELLOW)Compiling $<... $${SPINNER:$$i:1}$(NC)"; \
		sleep 0.001; \
		i=$$((i+1)); \
	done
	@$(CC) $(CFLAGS) -I $(INCD) -c $< -o $@
	@printf "\r$(GREEN)Compiled $< successfully!$(NC)\n"

$(OBJD):
	mkdir -p $(OBJD)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJD)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re