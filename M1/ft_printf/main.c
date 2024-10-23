/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:06:42 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/23 13:30:00 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_strrlen(const char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + ft_strrlen(s + 1));
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*ft_test_printf(char *origin, char *mine)
{
	if (!origin || !mine)
		return ("Fail - empty string.");
	if (!ft_strncmp(origin, mine, ft_strrlen(origin)))
		return ("OK.");
	return ("Fail.");
}

void	ft_run_test(void)
{
	int	i;

	i = 1;
	printf("teste %d: %s\n", i, ft_test_printf("aa", "aa"));
	i++;
	printf("teste %d: %s\n", i, ft_test_printf("aa", "ab"));
	i++;
	printf("teste %d: %s\n", i, ft_test_printf("aa", ""));
	i++;
}

int	main(void)
{
	ft_run_test();
	return (0);
}
