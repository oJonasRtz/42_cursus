/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:11:45 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/14 14:49:02 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
	Makes a copy of s1 and return the string without set char

	ex: "test", "t" returns "es"

	//////////////////WIP - does not work as expected////////////////// 
*/
// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*copy;
// 	int		start;
// 	int		end;

// 	if (!s1 || !set)
// 		return (NULL);
// 	start = 0;
// 	end = ft_strlen(s1) - 1;
// 	while (start <= end && ft_strchr(set, s1[start]))
// 		start++;
// 	while (end >= start && ft_strchr(set, s1[end]))
// 		end--;
// 	copy = malloc((end - start) + 2);
// 	if (!copy)
// 		return (NULL);
// 	ft_strlcpy(copy, &s1[start + 1], end - start);
// 	return (copy);
// }
