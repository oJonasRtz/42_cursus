/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 10:05:19 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/21 10:34:15 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*str;

	fd = open("test.txt", O_RDONLY);
		str = get_next_line(fd);
	printf("%s", str);
	free(str);
		str = get_next_line(fd);
	printf("%s", str);
	free(str);
		str = get_next_line(fd);
	printf("%s", str);
	free(str);
		str = get_next_line(fd);
	printf("%s", str);
	free(str);
	str = get_next_line(fd);
	printf("%s", str);
	free(str);
	close(fd);
	return (0);
}

//a
