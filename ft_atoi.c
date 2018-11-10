/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:43:05 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/10 21:27:17 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

long int	number(char *str)
{
	int			i;
	long int	ret;

	i = 0;
	ret = 0;
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		ret = ret * 10 + (*(str + i) - '0');
		i++;
	}
	return (ret);
}

int			ft_atoi(char *str)
{
	int i;

	i = 0;
	while (*(str + i) == ' ' || *(str + i) == '\n' || *(str + i) == '\t')
	{
		i++;
	}
	if (*(str + i) == '-')
		return (-(int)number((str + i + 1)));
	else if (*(str + i) == '+')
		return ((int)number((str + i + 1)));
	return ((int)number(str + i));
}
