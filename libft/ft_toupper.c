/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvtorre <alvtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 21:39:20 by alvtorre          #+#    #+#             */
/*   Updated: 2022/05/19 19:40:29 by alvtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converts a lower-case letter to the corresponding upper-case letter.

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
