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

int		intlen(int nb)
{
	int i;

	i = 0;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (intlen(-nb) + 1);
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

/*
void	ft_strrev(char *s)
{
	int		i;
	char	c;

	i = 0;
	while (i < ft_strlen(s) / 2)
	{
		c = *(s + i);
		*(s + i) = *(s + ft_strlen(s) - i - 1);
		*(s + ft_strlen(s) - i - 1) = c;
		i++;
	}
}
*/
char	*ft_itoa(int nbr)
{
	char	*s;
	int		i;
	int		a;
	int		b;

	b = nbr;
	a = intlen(nbr);
	if(!(s = (char *)malloc(sizeof(char) * (intlen(nbr) + 1))))
		return(NULL);
	i = 0;
	nbr = (int)nbr;
	if (nbr < 0)
		nbr = -(nbr);
	while (i < a)
	{
		*(s + i) = (nbr) % 10 + '0';
		nbr = nbr / 10;
		i++;
	}
	*(s + i) = '\0';
	ft_strrev(s);
	if (b < 0)
		*(s) = '-';
	return (s);
}

/*
int			main(int argc, char **argv)
{
	int a;

	a = atoi(*(argv + 1));
	printf("intlen %d\n", intlen(a));
	printf("ft_itoa %s\n", ft_itoa(atoi(*(argv + 1))));
}
*/
