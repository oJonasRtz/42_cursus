/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:36:48 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/15 10:58:29 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Search for 'little' in 'big' at len caracteres

	returns a pointer to the first occurence it if it finds
	returns a pointer to big if little is empty
	if does not find returns NULL
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	if (!little)
		return ((char *)big);
	i = 0;
	little_len = ft_strlen(little);
	while (i + little_len <= len && big[i])
	{
		if (ft_strncmp(&big[i], little, little_len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
