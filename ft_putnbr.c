/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 22:16:33 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/10 22:39:03 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

static void	putdec(int n)
{
	char a;

	a = n + '0';
	write(1, &a, 1);
}

void		ft_putnbr(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-n);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	if (n >= 0)
		putdec(n % 10);
}
