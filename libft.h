/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:34:16 by fcharbon          #+#    #+#             */
/*   Updated: 2023/11/16 19:34:43 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

int			ft_isalnum(int c);
int			ft_atoi(const char *nptr);
int			ft_isascii(int c);
int			ft_toupper(int c);
int			ft_isalnum(int c);
int			ft_isdigit(int c);
int			ft_isalpha(int c);
int			ft_isprint(int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_tolower(int c);

size_t		ft_strlen(const char *s);

const char	*ft_strrchr(const char *s, int c);
const char	*ft_strchr(const char *s, int c);
const char	*ft_strnstr(const char	*big, const	char *little, size_t len);

#endif
