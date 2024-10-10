/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:27 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/10 11:44:35 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char	*h;
	char	*w;
	char	*i;

	w = "";
	h = "Hello world!!!";
	i = ft_strnstr(h, w, ft_strlen(h));
	printf("Verificação: %s\n", i);
}
