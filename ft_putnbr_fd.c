/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 22:16:33 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/11 19:12:17 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

static void	putdec(int n, int fd)
{
	char a;

	a = n + '0';
	write(fd, &a, 1);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr_fd(-n, fd);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	if (n >= 0)
		putdec(n % 10, fd);
}
