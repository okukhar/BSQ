/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:51:39 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/10 21:21:22 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ret;

	if(!(ret = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return(NULL);
	i = 0;
	while (*(s + i) != '\0')
	{
		*(ret + i) = (*f)(*(s + i));
		i++;
	}
	*(ret + i) = '\0';
	return (ret);
}
