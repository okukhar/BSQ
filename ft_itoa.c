/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 21:35:28 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/10 20:54:47 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strrev(char *s)
{
	int i;
	int a;
	int b;

	i = ft_strlen(s);
	a = 0;
	b = i / 2 + i % 2;
	while (i > b)
	{
		*(s + a) = *(s + a) + *(s + i - 1);
		*(s + i - 1) = *(s + a) - *(s + i - 1);
		*(s + a) = *(s + a) - *(s + i - 1);
		a++;
		i--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	a;
	char	*s;
	int		i;

	i = 0;
	if (!(s = (char *)malloc(sizeof(char) * n)))
		return (NULL);
	while (n > 0)
	{
		a = n % 10 + '0';
		n = n / 10;
		*(s + i) = a;
		i++;
	}
	return (ft_strrev(s));
}
