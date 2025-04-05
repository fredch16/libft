# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fredchar <fredchar@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/10 12:58:21 by fredchar          #+#    #+#              #
#    Updated: 2025/03/13 16:59:06 by fredchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a
CC := gcc
CFLAGS := -Wall -Wextra -Werror
INCD := include
SRCD := src
OBJD := obj

# Colors
GREEN := \033[0;32m
YELLOW := \033[0;33m
RED := \033[0;31m
NC := \033[0m # No Color

# Spinner animation
SPINNER := / - \\ \|

SRCS :=			$(SRCD)/printf.c \
				$(SRCD)/print_str.c \
				$(SRCD)/print_char.c \
				$(SRCD)/print_nbr_base.c \
				$(SRCD)/print_pointer.c \

OBJS := $(SRCS:$(SRCD)/%.c=$(OBJD)/%.o)

all: $(NAME)

$(OBJD)/%.o: $(SRCD)/%.c | $(OBJD)
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
	@printf "$(RED)Cleaning object files...$(NC)\n"
	rm -rf $(OBJD)
	@printf "$(GREEN)Object files cleaned!$(NC)\n"

fclean: clean
	@printf "$(RED)Cleaning library ...$(NC)\n"
	rm -f $(NAME)
	@printf "$(GREEN)Library cleaned!$(NC)\n"

re: fclean all

.PHONY: all clean fclean re