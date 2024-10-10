/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:27 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/10 10:45:24 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char	*h;
	char	*w;
	int		i;
	int		i2;

	w = "Hello world!!";
	h = "Hello Universe!!!";
	i = ft_strncmp(h, w, 8);
	i2 = strncmp(h, w, 8);
	printf("Verificação: %d\nOriginal: %d\n", i, i2);
}
