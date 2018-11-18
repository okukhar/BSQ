/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 16:33:50 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/10 21:19:53 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (1);
	while (*(s1 + i) != '\0' && *(s2 + i) != '\0' && i < n)
	{
		if (*(s1 + i) != *(s2 + i))
			return (0);
		i++;
	}
	if(*(s1 + i) != '\0' && *(s2 + i) == '\0')
		return (0);
	else if (*(s1 + i) == '\0' && *(s2 + i) != '\0')
		return (0);
	if (i == n || (*(s1 + i) == '\0' && *(s2 + i) == '\0'))
		return (1);
	return (1);
}
/*
int	main(int argc, char **argv)
{
	printf("%d", ft_strnequ(*(argv + 1), *(argv + 2), atoi(*(argv + 3))));
}
*/
