/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:34:18 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/26 15:47:23 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf.h"

int	ft_num_count_base(unsigned int n, int base_len)
{
	int	cnt;

	cnt = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= base_len;
		cnt++;
	}
	return (cnt);
}

/*
	Takes a int and converts to a base
*/
int	ft_itoa_base(unsigned long value, char *base)
{
	int		len;
	char	*temp;

	if (value == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	len = ft_num_count_base(value, 16);
	temp = ft_calloc(len + 1, sizeof(char));
	if (!temp)
		return (0);
	while (value > 0 && len > 0)
	{
		temp[--len] = base[value % 16];
		value /= 16;
	}
	ft_putstr_fd(temp, 1);
	len = ft_strlen(temp);
	free(temp);
	return (len);
}

int	get_pointer(void *p)
{
	int			len;
	uintptr_t	pnt;

	if (!p)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	pnt = (uintptr_t)p;
	ft_putstr_fd("0x", 1);
	len = ft_itoa_base(pnt, "0123456789abcdef");
	return (len + 2);
}
