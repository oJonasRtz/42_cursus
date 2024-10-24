/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:06:42 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/24 16:33:20 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf.h"
#include <stdio.h>

void	ft_test(void)
{
	int	mine;
	int	original;

	printf("\nOriginal\n");
	original = printf("Decimal: %d teste %d\n", -10, 50);	////decinal
	ft_printf("int: %i\n", ft_num_count(25));	////int
	printf("unsigned: %u\n", -5);						///unsigned
	printf("Percentage: 5%% .05%%\n");
	printf("char: %c\n", 'c');
	printf("String: %s\n", "teste");
	printf("return: %d\n\n", original);		////return

	ft_printf("Mine\n");
	mine = ft_printf("Decimal: %d teste %d\n", -10, 50);
	ft_printf("int: %i\n", ft_num_count(25));
	printf("unsigned: %u\n", -5);
	ft_printf("Percentage: 5%% .05%%\n");
	ft_printf("char: %c\n", 'c');
	ft_printf("String: %s\n", "teste");
	ft_printf("return: %d\n\n", mine);
}

int	main(void)
{
	ft_test();
	return (0);
}
