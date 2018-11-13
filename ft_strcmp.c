/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:52:22 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/13 19:20:05 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) != '\0' && *(s2 + i) != '\0' && s1 + i && s2 + i)
	{
		if (*(s1 + i) < *(s2 + i))
			return (-1);
		else if (*(s1 + i) > *(s2 + i))
			return (1);
		i++;
	}
	if (*(s1 + i) == '\0' && *(s2 + i) != '\0')
		return (-1);
	else if (*(s1 + i) != '\0' && *(s2 + i) == '\0')
		return (1);
	return (0);
}

/*
int		main(int argc, char **argv)
{
//	printf("hrllo");
//	printf("%d", (int)(**(argv + 1) == '\0'));
	printf("%d\n", ft_strcmp(*(argv + 1), *(argv + 2)));
}
*/
