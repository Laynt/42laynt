/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvtorre <alvtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:19:52 by alvtorre          #+#    #+#             */
/*   Updated: 2022/05/19 19:46:41 by alvtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Locates the first occurrence of the null-terminated string needle in
// the null-terminated string haystack.

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		i2;
	size_t		l_len;

	i = 0;
	l_len = ft_strlen(needle);
	if (needle[0] == '\0' || haystack == needle)
		return ((char *) haystack);
	while (haystack[i] != '\0' && i < len)
	{
		i2 = 0;
		while (haystack[i + i2] != '\0' && needle[i2] != '\0'
			&& haystack[i + i2] == needle[i2] && i + i2 < len)
			i2++;
		if (i2 == l_len)
			return ((char *) haystack + i);
		i++;
	}
	return (NULL);
}
