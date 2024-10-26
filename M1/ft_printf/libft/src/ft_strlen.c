/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:32:21 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/26 13:15:59 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Takes the length of a string

	doesn't include the NULL terminator
*/
int	ft_strlen(const char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
	strlen recursive
*/
int	ft_strrlen(const char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + ft_strrlen(s + 1));
}
