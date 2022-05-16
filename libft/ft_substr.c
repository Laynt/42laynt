/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvtorre <alvtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:54:39 by alvtorre          #+#    #+#             */
/*   Updated: 2022/05/16 19:35:55 by alvtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ptr;
	size_t		i;

	if (!s)
		return (NULL);
	if (len <= 0 || (start + 1 > ft_strlen(s)))
	{
		ptr = (char *)malloc(1);
		*ptr = 0;
		return (ptr);
	}
	ptr = (char *)malloc (sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	if (start < ft_strlen(s))
	{
		while (s[start] != '\0' && i < len)
			ptr[i++] = s[start++];
	}
	ptr[i] = '\0';
	return (ptr);
}
