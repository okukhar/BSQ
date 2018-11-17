/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:57:03 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/10 21:25:42 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *ret;
	int		i;

	i = 0;
	ret = NULL;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == (const char)c)
		{
			ret =  (char *)(s + i);
		}
		i++;
	}
	if (*(s + i) == (const char)c)
		ret = (char *)(s + i);
	return (ret);
}
/*
int	main(int argc, char **argv)
{
	char *src = "the cake is a lie !\0I'm hidden lol\r\n";

	printf("%s\n", (src + ft_strlen(src)));
	printf("%s", ft_strrchr(src, ' '));
}
*/
