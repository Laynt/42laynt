/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvtorre <alvtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 21:20:25 by alvtorre          #+#    #+#             */
/*   Updated: 2022/05/19 19:33:30 by alvtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Writes len bytes of value c (converted to an unsigned char) to the string b.

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*(ptr++) = (unsigned char)c;
		n--;
	}
	return (s);
}
