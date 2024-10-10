/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:27 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/10 12:07:04 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*h;
	char	w;
	char	*i;

	w = '\0';
	h = "Hello world!!!";
	i = ft_strrchr(h, w);
	printf("Verificação: %s\n", i);
}
