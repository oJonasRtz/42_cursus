/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:14:32 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/10 12:46:34 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Search for the first instance of 'c' in the first n Bytes of 's'
	
	Returns a pointer to 'c' in 's' or NULL
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pnt;
	size_t			i;

	pnt = (unsigned char *)s;
	i = 0;
	while (i < n && pnt[i])
	{
		if (pnt[i] == c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
