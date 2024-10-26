/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:34:18 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/26 12:58:28 by jopereir         ###   ########.fr       */
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
	int		base_len;
	int		len;
	char	*temp;

	base_len = ft_strlen(base);
	len = ft_num_count_base(value, base_len);
	temp = malloc(len + 1);
	if (!temp)
		return (0);
	temp[len] = '\0';
	if (value == 0)
	{
		temp[0] = base[0];
		ft_putstr_fd(temp, 1);
		free(temp);
		return (len);
	}
	while (value > 0)
	{
		temp[--len] = base[value % base_len];
		value /= base_len;
	}
	ft_putstr_fd(temp, 1);
	free(temp);
	return (base_len);
}

int	get_pointer(void *p)
{
	int				len;
	unsigned long	pnt;

	pnt = (unsigned long)p;
	ft_putstr_fd("0x", 1);
	len = ft_itoa_base((unsigned long)pnt, "0123456789abcdef");
	return (len);
}
