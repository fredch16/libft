/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredchar <fredchar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:04:28 by fredchar          #+#    #+#             */
/*   Updated: 2025/03/10 17:16:42 by fredchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stddef.h>

int		ft_isalnum(unsigned char c);
int		ft_isalpha(unsigned char c);
int		ft_isdigit(unsigned char c);
int		ft_isprint(unsigned char c);
int		ft_isascii(unsigned char c);
int		ft_toupper(unsigned char c);
int		ft_tolower(unsigned char c);
size_t	ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

#endif
