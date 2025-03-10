/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredchar <fredchar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:28:54 by fredchar          #+#    #+#             */
/*   Updated: 2025/03/10 13:33:29 by fredchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int nb;
    int sign;

    nb = 0;
    sign = 1;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        nb = nb * 10 + (*str - '0');
        str++;
    }
    return (nb = nb * sign);
}
#include <stdio.h>

int main(void)
{
    char str1[] = "42";
    char str2[] = "-42";
    char str3[] = "0";
    char str4[] = "+123";
    char str5[] = "abc";

    printf("String: %s, Integer: %d\n", str1, ft_atoi(str1));
    printf("String: %s, Integer: %d\n", str2, ft_atoi(str2));
    printf("String: %s, Integer: %d\n", str3, ft_atoi(str3));
    printf("String: %s, Integer: %d\n", str4, ft_atoi(str4));
    printf("String: %s, Integer: %d\n", str5, ft_atoi(str5));

    return 0;
}