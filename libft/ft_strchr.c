/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvtorre <alvtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 21:59:00 by alvtorre          #+#    #+#             */
/*   Updated: 2022/04/27 21:59:27 by alvtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    while (*str)
	{
		if (*str == (unsigned char) c)
			return ((char *) str);
		str++;
	}
	if ((unsigned char) c == '\0')
		return ((char *) str);
	return ((char *) NULL);
}