/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:30:41 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/26 10:57:54 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf.h"

/*
	returns the format of the arg
*/
int	get_format(char c, va_list args)
{
	int		length;

	length = 0;
	if (c == 'd' || c == 'i')
		length = ft_get_int(va_arg(args, int));
	else if (c == 'u')
		length = ft_get_unsigned(va_arg(args, unsigned int));
	else if (c == '%')
		length = ft_get_percentage();
	else if (c == 'c')
		length = ft_get_char(va_arg(args, int));
	else if (c == 's')
		length = ft_get_string(va_arg(args, char *));
	else if (c == 'x')
		length = ft_itoa_base(va_arg(args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		length = ft_itoa_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	return (length);
}

/*
	it shows the text char by char when it faces a '%' it verifies
	the format and shows the string of the var
	
	return - the number of char displayed at the terminal
*/
int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		num_char_displayed;

	va_start(args, str);
	num_char_displayed = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			num_char_displayed += get_format(str[i], args);
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			num_char_displayed++;
		}
		i++;
	}
	va_end(args);
	return (num_char_displayed);
}
