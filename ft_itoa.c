/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 21:35:28 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/13 20:03:34 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static char	*ft_strrev(char *s)
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

int			intlen(int n)
{
	int i;
	int a;

	a = n;
	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	a;
	char	*s;
	int		i;

	i = 0;
	if (!(s = (char *)malloc(sizeof(char) * (intlen(n) + 1))))
		return (NULL);
	if (n < 0)
	{
		*(s + intlen(n) - 1) = '-';
		n = -n;
	}
	else if (n == 0)
	{
		*s = 0 + '0';
		return (s);
	}
	while (n > 0)
	{
		printf("%d\n", i);
		a = n % 10 + '0';
		n = n / 10;
		*(s + i++) = a;
	}
	*(s + i + 1) = '\0';
	return (ft_strrev(s));
}

int			main(int argc, char **argv)
{
	int a;

	a = atoi(*(argv + 1));
	printf("intlen %d\n", intlen(a));
	printf("ft_itoa %s", ft_itoa(atoi(*(argv + 1))));
}
