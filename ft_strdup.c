/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 23:09:53 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/10 20:45:41 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char			*strdup(const char *s1)
{
	int		a;
	char	*s2;

	a = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char) * a);
	ft_memcpy(s2, s1, a);
	return (s2);
}
