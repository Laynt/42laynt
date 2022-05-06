/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvtorre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:57:26 by alvtorre          #+#    #+#             */
/*   Updated: 2022/04/27 21:06:06 by alvtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (n == 0 || dst == src)
		return (NULL);
	while (i < n)
	{
		str1[i] = str2[i];
		if (str1[i] == (unsigned char ) c)
			return ((void *)dst + i + 1);
		i++;
	}
	return (NULL);
}
