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
size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	int			j;
	size_t		dst_len;
	size_t		src_len;

	i = ft_strlen(dst);
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size < dst_len + 1)
		return (src_len + size);
	if (size > dst_len + 1)
	{
		while (i < size - 1)
			*(dst + i++) = *(src + j++);
		*(dst + i) = '\0';
	}
	return (dst_len + src_len);
}
/*
size_t		ft_strlcat(char *restrict dst, const char *restrict src,
	size_t dstsize)
{
	size_t	i;
	int		a;

	i = 0;
	a = ft_strlen(dst);
//	*(dst + a + dstsize + 3840 * 4) = 'a';
//	printf("%d\n",(dst + a + dstsize + 3840 * 4) != NULL);
//	printf("%d\n", (dst + a + dstsize + 3840) != NULL);
//	printf("%d\n", (((dst + a + dstsize + 3840))) != NULL);
	while (i < dstsize)
	{
		*(dst + a) = *(src + i);
		a++;
		i++;
	}
	if (dstsize != 0 )
		*(dst + a) = '\0';	
	return (ft_strlen(dst));
}
*/
/*
int		main(int argc, char **argv)
{
	char dst[0xF00] = "there is no stars in the sky";
	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
	ft_strlcat(dst, src, ft_strlen(src) + ft_strlen(dst));
	printf("%s", dst);
}
*/
