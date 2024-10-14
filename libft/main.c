/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:27 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/14 13:42:05 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*hw;
	char	**h;

	hw = "Hello word";
	h = ft_split(hw, ' ');
	printf("%s\n%s\n", h[0], h[1]);
	return (0);
}
