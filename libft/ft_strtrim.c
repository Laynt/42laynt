/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvtorre <alvtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:24:23 by alvtorre          #+#    #+#             */
/*   Updated: 2022/05/19 21:09:28 by alvtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Delete all characters of the string 'set' from the begining to the end of
// 's1' till find a character not from 'set'

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = ft_strlen(s1);
	while (end && ft_strchr(set, s1[end]))
	{
		end--;
	}
	ptr = ft_substr((char *)s1, 0, end + 1);
	return (ptr);
}
