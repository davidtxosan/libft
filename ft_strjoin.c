/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 20:39:22 by davidsan          #+#    #+#             */
/*   Updated: 2022/05/06 20:41:43 by davidsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t				size1;
	size_t				size2;
	size_t				i;
	size_t				j;
	char				*dst;

	if (LIBFT_DEBUG && ((s1 == NULL) || (s2 == NULL)))
		ft_errnullptr("ft_strjoin");
	size1 = (s1 == NULL ? 0 : ft_strlen(s1));
	size2 = (s2 == NULL ? 0 : ft_strlen(s2));
	if ((dst = malloc((size1 + size2 + 1) * sizeof(char))) == NULL)
		return (0);
	i = 0;
	j = 0;
	if (s1 != NULL)
		while (i < size1)
			dst[j++] = s1[i++];
	i = 0;
	if (s2 != NULL)
		while (i < size2)
			dst[j++] = s2[i++];
	dst[size1 + size2] = '\0';
	return (dst);
}
