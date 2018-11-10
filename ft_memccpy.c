/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 21:52:50 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/10 20:45:08 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src,
	int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (*((char *)src) == (unsigned char)c)
			return (dst + i);
		*((char *)dst + i) = *((char *)src + i);
		i++;
	}
	return (NULL);
}
