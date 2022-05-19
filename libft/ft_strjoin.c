/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvtorre <alvtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:11:43 by alvtorre          #+#    #+#             */
/*   Updated: 2022/05/19 21:05:47 by alvtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Save memory with malloc and returns a new string based on the concadenation
// of s1 and s2

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	size1;
	size_t	size2;

	if (!s1 || !s2)
		return (NULL);
	ptr = (char *)malloc (sizeof(char) * \
				(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr)
		return (NULL);
	size1 = 0;
	while (s1[size1] != '\0')
	{
		ptr[size1] = s1[size1];
		size1++;
	}
	size2 = 0;
	while (s2[size2] != '\0')
		ptr[size1++] = s2[size2++];
	ptr[size1] = '\0';
	return (ptr);
}
