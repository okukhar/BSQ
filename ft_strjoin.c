/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 18:03:51 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/11 19:53:53 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*ret;

	if (!(ret = (char *)malloc(sizeof(char) *
	(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		*(ret + i) = *(s1 + i);
		i++;
	}
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		*(ret + i) = *(s2 + i);
		i++;
	}
	return (ret);
}
