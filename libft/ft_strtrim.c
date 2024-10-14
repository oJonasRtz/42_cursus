/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:11:45 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/14 10:38:26 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	int		i;
	int		j;

	copy = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!copy)
		return (NULL);	
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] != set[j])
				copy[i] = s1[i];
			j++;
		}
		i++;
	}
	return (copy);
}
