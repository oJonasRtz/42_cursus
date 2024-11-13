/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:45:28 by jopereir          #+#    #+#             */
/*   Updated: 2024/11/13 11:50:31 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
	get the amount of index of an array
*/
static int	ft_arraylen(int *a)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

void	ft_sort(int *n)
{
	int	temp;

	if (ft_arraylen(n) <= 1)
		return ;
	if (n[1] < n[0])
	{
		temp = n[0];
		n[0] = n[1];
		n[1] = temp;
	}	
}
