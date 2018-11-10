/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:27:25 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/10 20:31:53 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (*((char *)dest + i) != '\0')
	{
		if (dest + i == src)
		{
			while (*((char *)src + i) != '\0' && j < n)
			{
				*((char *)dest + j) = *((char *)src + j + i);
				j++;
			}
			return (dest);
		}
		i++;
	}
	ft_memcpy(dest, src, n);
	return (dest);
}
