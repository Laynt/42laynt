/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvtorre <alvtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:48:18 by alvtorre          #+#    #+#             */
/*   Updated: 2022/05/19 19:33:00 by alvtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Computes the length of the string s.

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int		c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}
