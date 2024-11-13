/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:42:42 by jopereir          #+#    #+#             */
/*   Updated: 2024/11/13 10:29:46 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

/*
	Returns the greater size of an array
*/
int	get_size(int *a, int *b, int *size_a, int *size_b)
{
	while (a != NULL && a[*size_a])
		(*size_a)++;
	while (b != NULL && b[*size_b])
		(*size_b)++;
	if (*size_b > *size_a)
		return (*size_b);
	return (*size_a);
}

void	draw_grid(int	*n1, int *n2)
{
	int	i;
	int	size_a;
	int	size_b;
	int	max_size;

	size_a = 0;
	size_b = 0;
	max_size = get_size(n1, n2, &size_a, &size_b);
	i = 0;
	while (i < max_size)
	{
		if (i < size_a)
			ft_printf("%d", n1[i]);
		else
			ft_printf(" ");
		if (i < size_b)
			ft_printf(" %d", n2[i]);
		ft_printf("\n");
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
		a = stack_init(argv[1]);
		if (argc > 2)
			b = stack_init(argv[2]);
		draw_grid(a, b);
	}
	else
		ft_printf("Too few arguments.");
	free(a);
	free(b);
	return (0);
}
