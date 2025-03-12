/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredchar <fredchar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:26:33 by fredchar          #+#    #+#             */
/*   Updated: 2025/03/12 13:21:21 by fredchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	int		found;

	found = 0;
	while (*s)
	{
		if (*s == (char)c)
		{
			last = (char *)s;
			found = 1;
		}
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	if (found)
		return (last);
	return (NULL);
}
