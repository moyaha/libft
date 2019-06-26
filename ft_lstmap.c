/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoyaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 09:16:11 by pmoyaha           #+#    #+#             */
/*   Updated: 2019/06/26 10:19:37 by pmoyaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *list, t_list *(*f) (st_list *elem))
{
	t_list	*new;
	t_list	*new_item;

	if (lst)
	{
		new = f(lst);
		new_item = new;
		lst = lst->next;
		while (lst)
		{
			new_item->next = f(lst);
			new_item = new_item->next;
			lst = lst->next;
		}
		return (new);
	}
	return (NULL);
}
