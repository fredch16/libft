/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:40:24 by fcharbon          #+#    #+#             */
/*   Updated: 2023/11/20 17:10:00 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*result;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start + len > slen)
		len = slen - start;
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	if (start >= slen || len <= 0)
		return (ft_strdup(""));
	ft_strncpy(result, s + start, len);
	result[len] = '\0';
	return (result);
}
