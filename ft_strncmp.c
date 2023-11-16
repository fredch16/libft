/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:24:30 by fcharbon          #+#    #+#             */
/*   Updated: 2023/11/05 21:29:29 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	result;

	while (n > 0 && *s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0 || (*s1 == '\0' && *s2 == '\0'))
		return (0);
	else
	{
		result = *s1 - *s2;
		return (result);
	}
}
