/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:30:52 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/26 15:45:41 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>
# include "libft.h"

int	ft_printf(const char *str, ...);
int	ft_num_count(int n);
int	ft_get_unsigned(unsigned int n);
int	ft_get_int(int n);
int	ft_get_percentage(void);
int	ft_get_char(char c);
int	ft_get_string(char *str);
int	ft_itoa_base(unsigned long value, char *base);
int	get_pointer(void *p);

#endif
