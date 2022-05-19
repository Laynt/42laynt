/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvtorre <alvtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:55:26 by alvtorre          #+#    #+#             */
/*   Updated: 2022/05/19 19:35:02 by alvtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*(ptr++) = '\0';
		n--;
	}
	return (s);
}
