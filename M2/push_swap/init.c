/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:14:08 by jopereir          #+#    #+#             */
/*   Updated: 2024/11/12 13:09:48 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*stack_init(char *s)
{
	int		i;
	int		*n;
	char	**str;
	int		s_size;

	str = ft_split(s, ' ');
	s_size = 0;
	while (str[s_size])
		s_size++;
	n = ft_calloc(s_size + 1, sizeof(int));
	if (!n)
		return (NULL);
	i = 0;
	while (str[i])
	{
		n[i] = ft_atoi(str[i]);
		i++;
	}
	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	return (n);
}
