/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:01:29 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/10 17:08:32 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

size_t		ft_strlcat(char *restrict dst, const char *restrict src,
	size_t dstsize)
{
	size_t	i;
	int		a;

	i = 0;
	a = ft_strlen(dst);
	while (i < dstsize - a - 1)
	{
		*(dst + a) = *(src + i);
		a++;
		i++;
	}
	if (dstsize != 0)
		*(dst + a) = '\0';
	return (a + ft_strlen(src));
}
