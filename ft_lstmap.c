/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leyeghia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 20:15:34 by leyeghia          #+#    #+#             */
/*   Updated: 2022/03/29 14:26:06 by leyeghia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;
	t_list	*temp;

	if (!lst || !f || !del)
		return (0);
	temp = 0;
	while (lst)
	{
		newnode = ft_lstnew((*f)(lst -> content));
		if (!newnode)
		{
			ft_lstclear(&lst, del);
			return (0);
		}
		ft_lstadd_back(&temp, newnode);
		lst = lst -> next;
	}
	return (temp);
}
