/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 09:59:11 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/05 10:14:18 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int	_is_lower_case;
	int	_is_upper_case;

	_is_lower_case = (c >= 'a' && c <= 'z');
	_is_upper_case = (c >= 'A' && c <= 'Z');
	return (_is_lower_case || _is_upper_case);
}
