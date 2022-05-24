/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvtorre <alvtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:54:39 by alvtorre          #+#    #+#             */
/*   Updated: 2022/05/24 22:11:52 by alvtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns the substring of s. The substring start on 'start' and has a max
// length of 'len'

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ptr;
	size_t		i;
	size_t		slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
	{
		ptr = (char *) ft_calloc(1, sizeof (char));
		return (ptr);
	}
	if (len > slen)
		len = slen;
	ptr = (char *) ft_calloc(sizeof(char), (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	return (ptr);
}
