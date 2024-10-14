/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:27 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/14 12:49:24 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	print_index_char(unsigned int index, char *c)
{
	printf("Index: %u, Char: %c\n", index, *c);
}

int main(void)
{
	char str[] = "hello";
	
    ft_striteri(str, print_index_char);
    return 0;
}
