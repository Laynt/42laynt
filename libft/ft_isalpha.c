/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvtorre <alvtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:13:47 by alvtorre          #+#    #+#             */
/*   Updated: 2022/05/19 19:32:27 by alvtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Tests for any character for which isupper(3) or islower(3) is true

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
