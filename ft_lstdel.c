/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 15:43:15 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/06 17:24:47 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list **list;

	list = &(**alst).next;
	while ((**alst).next != NULL)
	{
		(*del)((**alst).content, (**alst).content_size);
		free(*(alst));
		*(alst) = NULL;
		(alst) = list;
	}
	(*del)((**alst).content, (**alst).content_size);
	free(*(alst));
	*(alst) = NULL;
}
