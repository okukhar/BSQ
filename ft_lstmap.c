/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 16:51:02 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/03 17:28:22 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;

	while ((*lst).next != NULL)
	{
		if (!(list = (t_list *)malloc(sizeof(t_list))))
			return (NULL);
		list = (*f)(lst);
		list = (*list).next;
		lst = (*lst).next;
	}
	return (list);
}
