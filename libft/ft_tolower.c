/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvtorre <alvtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 21:40:21 by alvtorre          #+#    #+#             */
/*   Updated: 2022/05/19 19:41:04 by alvtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converts an upper-case letter to the corresponding lower-case letter.

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
