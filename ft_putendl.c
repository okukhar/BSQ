/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 22:09:07 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/10 22:47:17 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		write(1, s + i, 1);
		i++;
	}
}

void		ft_putendl(char const *s)
{
	ft_putstr((char *)s);
	ft_putstr("\n");
}
