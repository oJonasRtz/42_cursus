/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:42:42 by jopereir          #+#    #+#             */
/*   Updated: 2024/11/13 13:02:47 by jopereir         ###   ########.fr       */
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

void	ft_switch_format(char *s, int *a, int *b)
{
	if (strncmp(s, "sa", ft_strlen(s)) == 0)
		ft_sort(a);
	else if (strncmp(s, "sb", ft_strlen(s)) == 0)
		ft_sort(b);
	else if (strncmp(s, "ss", ft_strlen(s)) == 0)
	{
		ft_sort(a);
		ft_sort(b);
	}
}

int	main(int argc, char *argv[])
{
	int		*a;
	int		*b;
	int		i;

	a = ft_calloc(5 + 1, sizeof(int));
	b = ft_calloc(5 + 1, sizeof(int));
	a[0] = 2;
	a[1] = 1;
	a[2] = 7;
	a[3] = 3;
	b[0] = 5;
	b[1] = 3;
	b[2] = 6;
	i = 1;
	if (argc > 1)
		while (argv[i])
			ft_switch_format(argv[i++], a, b);
	draw_grid(a, b);
	free(a);
	free(b);
	return (0);
}
