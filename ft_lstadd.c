/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 16:41:50 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/03 16:45:53 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (new)
		(*new).next = *alst;
	*alst = new;
}
/*
int	main(void)
{
	t_list *l = ft_lstnew(ft_strdup("nyacat"), 8);
	t_list *n = ft_lstnew(ft_strdup("OK"), 3);

	ft_lstadd(&l, n);
//	if (l == n && !strcmp(l->content, "OK") && l->content_size == 3)
	{
		printf("%s", (char *)(l->content));
	}
}
*/
