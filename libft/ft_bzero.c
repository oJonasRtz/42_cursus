/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:39:41 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/11 11:33:11 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	set memory(doesn't allocate)
	
	It fills the 's' with '\0' terminators giving a memory slot

	Verification
	while(i <= sizeof(a))
		printf("%p\n", (void *)&a[i++]);
	Result
		0xfffffffff
		0xfffffffff
		0xfffffffff
*/
void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((unsigned char *)s)[i++] = '\0';
}
