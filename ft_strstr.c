/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:03:20 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/11 22:01:32 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)(haystack + i));
	while (*(haystack + i) != '\0')
	{
		if (*needle == *(haystack + i))
		{
			j = 0;
			while (*(haystack + i + j) == *(needle + j))
			{
				if (*(needle + j + 1) == '\0')
					return ((char *)(haystack + i));
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
/*
int	main(int argc, char **argv)
{
	char *s2 = "FF";
	char *s1 = "see F your F return FF now FF";

//	printf("%s\n", ft_strstr(s1, s2));
	printf("%s\n", ft_strstr(*(argv + 1), *(argv + 2)));
}
*/
