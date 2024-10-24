/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:46:46 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/24 16:16:58 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf.h"

/*
	displays a unsigned int
*/
int	ft_get_unsigned(unsigned int n)
{
	ft_putnbr_fd(n, 1);
	return (ft_num_count(n));
}

int	ft_get_int(int n)
{
	int	num_cunt;

	num_cunt = ft_num_count(n);
	if (n < 0)
		num_cunt++;
	ft_putnbr_fd((unsigned int)n, 1);
	return (num_cunt);
}
