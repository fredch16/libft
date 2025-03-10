/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredchar <fredchar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:36:01 by fredchar          #+#    #+#             */
/*   Updated: 2025/03/10 20:04:36 by fredchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	int num;
	char *str;

	num = -12345;
	str = ft_itoa(num);
	printf("The string representation of %d is %s\n", num, str);
	free(str);

	num = 0;
	str = ft_itoa(num);
	printf("The string representation of %d is %s\n", num, str);
	free(str);

	num = 2147483647;
	str = ft_itoa(num);
	printf("The string representation of %d is %s\n", num, str);
	free(str);

	num = -2147483648;
	str = ft_itoa(num);
	printf("The string representation of %d is %s\n", num, str);
	free(str);

	return 0;
}