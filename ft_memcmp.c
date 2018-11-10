/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:55:10 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/10 20:16:06 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (*((const char *)s1 + i) == *((const char *)s2 + i))
			i++;
		else
			return ((int)(*((const char *)s1 + i) - *((const char *)s2 + i)));
	}
	return (0);
}
