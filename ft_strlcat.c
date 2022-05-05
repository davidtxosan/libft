/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:30:00 by davidsan          #+#    #+#             */
/*   Updated: 2022/04/25 13:29:32 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	index;
	size_t	src_idx;
	size_t	value;

	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dest))
			value = ft_strlen(src) + size;
	else
		value = ft_strlen(src) + ft_strlen(dest);
	index = 0;
	while (dest[index])
		index++;
	src_idx = 0;
	while (src[src_idx] != '\0' && index + 1 < size)
	{
		dest[index] = src[src_idx];
		src_idx++;
		index++;
	}
	dest[index] = '\0';
	return (value);
}
