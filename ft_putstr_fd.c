/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:59:40 by fcharbon          #+#    #+#             */
/*   Updated: 2023/11/17 14:55:19 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
int	ft_strlen(char *str)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}*/

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;
	size_t	counter;

	counter = 0;
	len = ft_strlen(s);
	if (s == NULL)
		return ;
	if (fd < 0)
		return ;
	while (counter <= len)
	{
		ft_putchar_fd(s[counter], fd);
		counter++;
	}
}
