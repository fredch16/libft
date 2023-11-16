/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:48:08 by fcharbon          #+#    #+#             */
/*   Updated: 2023/11/06 17:23:10 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	total_src_len;

	src_len = 0;
	total_src_len = 0;
	while (src_len < size -1 && src[src_len] != '\0')
	{
		dst[src_len] = src[src_len];
		src_len++;
	}
	dst[src_len] = '\0';
	while (src[total_src_len] != '\0')
		total_src_len++;
	return (total_src_len);
}
