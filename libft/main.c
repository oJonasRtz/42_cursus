/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:27 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/11 11:58:35 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*h;
	//char	*w;
	int		i;

	//h = "      -+-+-+12345";
	//printf("Verificação antes: %s\n", h);
	h = ft_calloc(10, sizeof(char));
	i = 0;
	while (i <= 10)
		printf("Verificação depois: %p\n", (void *)&h[i++]);
	free(h);
}
