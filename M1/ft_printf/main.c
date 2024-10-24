/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:06:42 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/24 16:19:34 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf.h"
#include <stdio.h>

void	ft_test(void)
{
	int	mine;
	int	original;

	printf("Original\n");
	original = printf("Hello: %d teste %d\n", -10, 50);	////decinal
	ft_printf("%i\n", ft_num_count(25));	////int
	printf("%u\n", -5);						///unsigned
	printf("5%% .05%%\n");
	printf("return: %d\n\n", original);		////return

	ft_printf("Mine\n");
	mine = ft_printf("Hello: %d teste %d\n", -10, 50);
	ft_printf("%i\n", ft_num_count(25));
	printf("%u\n", -5);
	ft_printf("5%% .05%%\n");
	ft_printf("return: %d\n\n", mine);
}

int	main(void)
{
	ft_test();
	return (0);
}
