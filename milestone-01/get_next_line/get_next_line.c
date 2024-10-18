/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:33:20 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/18 13:18:07 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
	Copy n bytes os src in dest
*/
void	ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

/*
	finds the end of the line and returns the string of the line
*/
char	*get_endl(char *str)
{
	int		i;
	int		line_len;
	char	*cpy;

	i = -1;
	line_len = 0;
	while (str[++i])
	{
		if (str[i] == '\n')
		{
			line_len = i + 1;
			break ;
		}
	}
	cpy = malloc(line_len + 1);
	if (!cpy)
		return (NULL);
	ft_strncpy(cpy, str, line_len);
	return (cpy);
}

/*
	Return a line of the file

	if it's called once return the fisrt line 
	if it's called twice return the sencond line 
	and there it goes
*/
char	*get_next_line(int fd)
{
	int			rd;
	char		*str;
	static int	line_cnt;
	static char	*last_line;

	if (!fd)
		return (NULL);
	str = malloc(BUFFER_SIZE + 1);
	if (!str)
		return (NULL);
	rd = read(fd, str, BUFFER_SIZE);
	last_line = get_endl(str);
	line_cnt++;
	free(str);
	return (last_line);
}
