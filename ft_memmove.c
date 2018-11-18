/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:27:25 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/13 17:10:26 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*
void	*ft_memmove(void *dt, const void *sc, size_t n)
{
	int i;

	i = -1;
	while (i++ < (int)n * (1 - (dt == sc)))
		*((unsigned char *)dt + (dt > sc) * (n - 1) + (-2 * (dt > sc) + 1) * i) =
		*((unsigned char *)sc + (dt > sc) * (n - 1) + (-2 * (dt > sc) + 1) * i);
	return (dt);
}
*/

void    *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (dest > src)
	{
		while (i < n)
		{
			*((unsigned char *)dest + n - 1 - i) = *((unsigned char *)src + n - 1 - i);
					i++;
		}
		return (dest);
	}
	else if (src > dest)
	{
		while (i < n)
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			i++;
		}
		return (dest);
	}
	return (dest);
}

/*
int		main(int argc, char **argv)
{
        char    src[] = "lorem ipsum dolor sit amet";
	char    *dest;
	dest = src + 1;
	size_t size = 5;

	ft_putmem(ft_memmove(dest, "consectetur", size), 22);
}
*/
