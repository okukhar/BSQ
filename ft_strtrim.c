/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 12:31:21 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/11 20:49:57 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		first_fill(char const *s)
{
	int		i;
	char	*a;

	i = 0;
	a = (char *)s;
	while (*(a + i) == ' ' || *(a + i) == '\t' || *(a + i) == '\n')
	{
		i++;
	}
	return (i);
}

char			*ft_strtrim(char const *s)
{
	char	*ret;
	int		i;
	int		j;

	i = first_fill(s);
	j = 0;
	if (!(ret = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (*(s + i) != ' '
	&& *(s + i) != '\t'
	&& *(s + i) != '\n'
	&& *(s + i) != '\0')
	{
		*(ret + j) = *((char *)s + i);
		i++;
		j++;
	}
	*(ret + j) = '\0';
	return (ret);
}
