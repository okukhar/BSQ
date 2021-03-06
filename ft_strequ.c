/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 16:05:16 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/10 20:51:09 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		if (*(s1 + i) != *(s2 + i))
			return (0);
		i++;
	}
	if (*(s1 + i) != '\0' && *(s2 + i) == '\0')
		return (0);
	else if (*(s1 + i) == '\0' && *(s2 + i) != '\0')
		return (0);
	return (1);
}
/*
int	main(int argc, char **argv)
{
	printf("%d\n", ft_strequ(*(argv + 1), *(argv + 2)));
}
*/
