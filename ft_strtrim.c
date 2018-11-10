/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 12:31:21 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/10 17:44:33 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		first_fill(char const *s)
{
	int i;

	i = 0;
	while (*(s + i) == ' '
		|| *(s + i) == '\t'
		|| *(s + i) == '\n')
		i++;
	return (i);
}

char			*ft_strtrim(char const *s)
{
	char	*ret;
	int		i;

	i = first_fill(s);
	ret = (char *)malloc(sizeof(char) * ft_strlen(s));
	while (*(s + i) != ' '
	|| *(s + i) != '\t'
	|| *(s + i) != '\n')
		i++;
	*(ret + i) = '\0';
	return (ret + first_fill(s));
}
