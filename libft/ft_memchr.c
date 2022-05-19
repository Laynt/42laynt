/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvtorre <alvtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 19:23:09 by alvtorre          #+#    #+#             */
/*   Updated: 2022/05/19 19:45:15 by alvtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns a pointer to the byte located, or NULL if no such byte exists
// within n bytes.

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*aux;
	size_t			i;

	aux = (unsigned char *)str;
	i = 0;
	while (n)
	{
		if (aux[i] == (unsigned char)c)
			return (aux + i);
		n--;
		i++;
	}
	return (NULL);
}
