/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:19:15 by usuario           #+#    #+#             */
/*   Updated: 2022/05/06 19:11:40 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	index;
	char			*modified_s;
	unsigned int	unsignedlenght;

	unsignedlenght = (unsigned int)ft_strlen((char *)s);
	modified_s = malloc(sizeof(char) * (len + 1));
	if (!s || !(modified_s))
		return (0);
	index = 0;
	while (start < unsignedlenght && s[start + index] && index < len)
	{
		modified_s[index] = s[start + index];
		index++;
	}
	modified_s[index] = '\0';
	return (modified_s);
}
