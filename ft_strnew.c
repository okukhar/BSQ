/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 13:25:11 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/10 21:22:37 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <strings.h>

char	*ft_srenew(size_t size)
{
	char	*of_the_king;
	size_t	i;

	of_the_king = (char *)malloc(size);
	i = 0;
	while (i < size)
	{
		*(of_the_king + i) = '\0';
		i++;
	}
	return (of_the_king);
}
