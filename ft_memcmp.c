/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:05:37 by fcharbon          #+#    #+#             */
/*   Updated: 2023/11/06 18:32:35 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	i = 0;
	ptr1 = s1;
	ptr2 = s2;
	while (i < n)
	{
		if (ptr1[i] < ptr2[i])
			return (-1);
		else if (ptr1[i] > ptr2[i])
			return (1);
		i++;
	}
	return (0);
}
