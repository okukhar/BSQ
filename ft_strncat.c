/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:53:46 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/11 21:59:27 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t	i;
	int		a;

	i = 0;
	a = ft_strlen(s1);
	while (i < n && *(s2 + i) != '\0' && s1 + a)
	{
		*(s1 + a) = *(s2 + i);
		i++;
		a++;
	}
	*(s1 + a) = '\0';
	return (s1);
}
/*
int	main(int argc, char **argv)
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = 1000;
	printf("%s\n", ft_strncat(buff2, str, max));
}
*/
