/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:06:42 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/26 15:50:41 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf.h"
#include <stdio.h>
#include <limits.h>

void	ft_test(void)
{
	int		mine;
	int		original;
	char	*s;
	char	*str;

	s = "Hello world";
	str = " Hi ";
	printf("\nOriginal\n");
	printf("Decimal: %d teste %d\n", -10, 50);
	printf("int: %i\n", ft_num_count(25));
	printf("unsigned: %u\n", -5);
	printf("Percentage: 5%% .05%%\n");
	printf("char: %c\n", 'c');
	printf("String: %s\n", "teste");
	printf("String Null: %s\n", (char *)NULL);
	printf("Hex_low: %x\n", 0);
	printf("Hex_up %X\n", 1015);
	printf("Hex negativo: %x\n", -10);
	printf("Ponteiro: %p\n", (void *)s);
	printf("Ponteiro: %p\n", (void *)str);
	original = printf("Ponteiro: %p\n", (void *)LONG_MAX);
	printf("int min: %i, %i\n", INT_MIN, INT_MAX);
	printf("return: %d\n\n", original);
	
	ft_printf("Mine\n");
	ft_printf("Decimal: %d teste %d\n", -10, 50);
	ft_printf("int: %i\n", ft_num_count(25));
	ft_printf("unsigned: %u\n", -5);
	ft_printf("Percentage: 5%% .05%%\n");
	ft_printf("char: %c\n", 'c');
	ft_printf("String: %s\n", "teste");
	ft_printf("String Null: %s\n", NULL);
	ft_printf("Hex_low: %x\n", 0);
	ft_printf("Hex_up %X\n", 1015);
	ft_printf("Hex negativo: %x\n", -10);
	ft_printf("Ponteiro: %p\n", (void *)s);
	ft_printf("Ponteiro: %p\n", (void *)str);
	mine = ft_printf("Ponteiro: %p\n", (void *)LONG_MAX);
	ft_printf("int min: %i, %i\n", INT_MIN, INT_MAX);
	ft_printf("return: %d\n\n", mine);
}

int	main(void)
{
	ft_test();
	return (0);
}
