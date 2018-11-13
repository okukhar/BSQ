/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:12:09 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/11 21:46:36 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		if (!(src + i))
			*(dst + i) = '\0';
		else
		{
			*(dst + i) = *(src + i);
			i++;
		}
	}
	return (dst);
}
