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
#include "libft.h"

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
		while (i < size - 1 && *(src + j) != '\0')
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
	while (i < dstsize - 1 && *(src + i) != '\0')
	{
		*(dst + a) = *(src + i);
		a++;
		i++;
	}
	if (dstsize != 0 )
		*(dst + a) = '\0';	
	return (ft_strlen(dst));
}

int		main(void)
{
	char *dst = (char *)malloc(sizeof(*dst) * 15);
	char *dst1 = (char *)malloc(sizeof(*dst1) * 15);
	char *dst2 = (char *)malloc(sizeof(*dst2) * 15);
	dst[11] = 'a';
	dst1[11] = 'a';
	dst2[11] = 'a';
//	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
//	ft_putmem(dst, 15);
	strlcat(dst, "lorem", 15);
	ft_putmem(dst, 15);
	write(1, "\n", 1);
	ft_strlcat(dst1, "lorem", 15);
	ft_putmem(dst1, 15);
	write(1, "\n", 1);
	ft_strlcat1(dst2, "lorem", 15);
	ft_putmem(dst2, 15);
	write(1, "\n", 1);
}
*/
