/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredchar <fredchar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:36:01 by fredchar          #+#    #+#             */
/*   Updated: 2025/03/10 17:17:45 by fredchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char	str[] = "Hello, world!";
	char		ch = 'o';
	char		*result;

	result = ft_strrchr(str, ch);
	if (result)
		printf("The last occurrence of '%c' in \"%s\" is at position: %ld\n", ch, str, result - str);
	else
		printf("Character '%c' not found in \"%s\"\n", ch, str);

	return (0);
}