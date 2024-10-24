/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:16:59 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/24 16:29:10 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf.h"

int	ft_get_percentage(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}

int	ft_get_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_get_string(char *str)
{
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
