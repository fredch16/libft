/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:19:04 by fcharbon          #+#    #+#             */
/*   Updated: 2023/11/07 16:25:41 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	val;
	size_t			i;

	ptr = (unsigned char *)s;
	val = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		ptr[i] = val;
		i++;
	}
	return (s);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	ptr = malloc(total_size);
	total_size = count * size;
	if (ptr != NULL)
		ft_memset(ptr, 0, total_size);
	return (ptr);
}
