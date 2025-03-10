/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredchar <fredchar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:04:28 by fredchar          #+#    #+#             */
/*   Updated: 2025/03/10 20:06:49 by fredchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>

int				ft_isalnum(unsigned char c);
int				ft_isalpha(unsigned char c);
int				ft_isdigit(unsigned char c);
int				ft_isprint(unsigned char c);
int				ft_isascii(unsigned char c);
int				ft_toupper(unsigned char c);
int				ft_tolower(unsigned char c);
size_t			ft_strlen(char *str);
int				ft_atoi(char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *s, int c, size_t n);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);

void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int dstsize);

void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(char *str);

char 			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_itoa(int n);

#endif
