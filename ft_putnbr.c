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
	if(n == -2147483648/* || n >= 2147483648*/)
	{
		write(1, "-2", 2);
		ft_putnbr(147483648);
	} 
//		return (void);
	else if (n < 0)
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
/*
int	main(int argc, char **(argv))
{
//	int a = (-2147483647 -1);
	int a;
	a = atoi(*(argv + 1));
	 ft_putnbr(a);
	write(1, "\n", 1);
//	printf("%d", -a);
//printf("%d", 21474836478);
}
*/
