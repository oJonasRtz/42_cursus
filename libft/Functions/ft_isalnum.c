/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:18:35 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/05 10:53:59 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	_is_digit;
	int	_is_alpha;

	_is_alpha = ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	_is_digit = (c >= '0' && c <= '9');
	return (_is_alpha || _is_digit);
}