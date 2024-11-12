/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:42:42 by jopereir          #+#    #+#             */
/*   Updated: 2024/11/12 13:01:02 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	draw_grid(int	*n1, int *n2)
{
	int	i;

	i = 0;
	while (n1[i])
	{
		if (n2)
			ft_printf("%d %d\n", n1[i], n2[i]);
		else
			ft_printf("%d \n", n1[i]);
		i++;
	}
	ft_printf("- -\na b\n");
}

int	main(int argc, char *argv[])
{
	int		*a;
	int		*b;

	a = NULL;
	b = NULL;
	if (argc > 1)
	{
		a = var_init(argv[1]);
		if (argc > 2)
			b = var_init(argv[2]);
		draw_grid(a, b);
	}
	else
		ft_printf("Too few arguments.");
	free(a);
	free(b);
	return (0);
}
