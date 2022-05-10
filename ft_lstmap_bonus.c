/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:07:21 by usuario           #+#    #+#             */
/*   Updated: 2022/05/10 10:57:53 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*elem;

	elem = ft_lstnew_bonus(f(lst->content));
	if (!lst)
		return (0);
	new_lst = 0;
	while (lst)
	{
		if (!(elem))
		{
			ft_lstclear_bonus(&new_lst, del);
			return (0);
		}
		ft_lstadd_back_bonus(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}
