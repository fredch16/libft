/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:40:24 by fcharbon          #+#    #+#             */
/*   Updated: 2023/11/07 19:16:45 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}

size_t	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		slen;
	char	*result;

	if (s == NULL || start < 0)
		return (NULL);
	slen = ft_strlen(input_string);
	if (start >= slen || len <= 0)
		return (NULL);
	if (start + len > slen)
		len = slen - start;
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	ft_strncpy(result, s + start, len);
	result[len] = '\0';
	return (result);
}
