/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:01:29 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/13 19:03:34 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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
	if((int)(dst + a + dstsize) == 1)
	{
		while (i < dstsize)
		{
			*(dst + a) = *(src + i);
			a++;
			i++;
		}
		if (dstsize != 0 )
			*(dst + a) = '\0';
	}
	return (ft_strlen(dst));
}

/*
int		main(int argc, char **argv)
{
	char *dst = "there is no stars in the sky";
	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
	ft_strlcat(dst, src, ft_strlen(src) + ft_strlen(dst));
	printf("%s", dst);
}
*/
