# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fredchar <fredchar@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/10 12:58:21 by fredchar          #+#    #+#              #
#    Updated: 2025/03/11 15:38:44 by fredchar         ###   ########.fr        #
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
RED := \033[0;31m
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
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memchr.c \
		ft_memmove.c \
		ft_strlcat.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strlcpy.c \
		ft_strjoin.c \
		ft_substr.c \
		ft_split.c \
		ft_strtrim.c \
		ft_strdup.c \
		ft_itoa.c \
		ft_striteri.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

BONUS_SRCS :=	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c \


OBJS := $(SRCS:%.c=$(OBJD)/%.o)
BONUS_OBJS := $(BONUS_SRCS:%.c=$(OBJD)/%.o)

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
	@printf "$(RED)Cleaning object files...$(NC)\n"
	rm -rf $(OBJD)
	@printf "$(GREEN)Object files cleaned!$(NC)\n"

fclean: clean
	@printf "$(RED)Cleaning library ...$(NC)\n"
	rm -f $(NAME)
	@printf "$(GREEN)Library cleaned!$(NC)\n"

re: fclean all

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus