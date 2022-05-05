/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:26:41 by davidsan          #+#    #+#             */
/*   Updated: 2022/04/28 19:56:24 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	index;
	size_t	c;

	index = 0;
	c = 0;
	if (!dest || !src)
		return (0);
	while (src[c])
		c++;
	while (src[index] && index + 1 < size)
	{
		dest[index] = src[index];
		index++;
	}
	if (size)
		dest[index] = '\0';
	return (c);
}
