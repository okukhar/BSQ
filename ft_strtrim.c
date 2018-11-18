/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 12:31:21 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/11 20:49:57 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		first_fill(char const *s)
{
	int		i;
	char	*a;

	i = 0;
	a = (char *)s;
	while (*(a + i) == ' ' || *(a + i) == '\t' || *(a + i) == '\n')
	{
		i++;
	}
	return (i);
}

static int		last_fill(char const *s)
{
	int i;

	i = ft_strlen(s) - 1;
	while (*(s + i) == ' '
	|| *(s + i) == '\t'
	|| *(s + i) == '\n')
		i--;
	return (i);
}

char			*ft_strtrim(char const *s)
{
	char	*ret;
	int		i;
	int		j;

	j = 0;
	i = first_fill(s);
	if (*(s + i) == '\0')
	{
		if(!(ret = (char *)malloc(sizeof(char))))
			return (NULL);
		(*(ret) = '\0');
		return (ret);
	}
	if (!(ret = (char *)malloc(sizeof(char) * (- i + last_fill(s) + 2))))
		return (NULL);
	while(i <= last_fill(s))
	{
		*(ret + j) = *((char *)s + i);
		i++;
		j++;
	}
	*(ret + j) = '\0';
	return (ret);
}
/*
int	main(void)
{
//	char *s1 = "     ";
//	printf("strlen %d\n", ft_strlen(s1));
//	printf("last fill %d\n", last_fill(s1));
//	printf("first_fill %d\n", first_fill(s1));
//	if(*(s1 + first_fill(s1)) == '\0')
//		printf("behind first fill ___0___\n");
//	if(*(ft_strtrim(s1)) == '\0')
//		printf("___0___\n");
	printf("%s\n", ft_strtrim(s1));
//	return (0);
}
*/
