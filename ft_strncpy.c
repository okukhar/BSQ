/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:12:09 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/11 21:46:36 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
/*
char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		if (!(src + i) && dst + i)
		{
			*(dst + i) = '\0';
			i++;
		}
		else if (*(src + i))
		{
			*(dst + i) = *(src + i);
			i++;
		}
	}
	return (dst);
}
*/

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;

	i = 0;
	while (i < len)
	{
		if (*(src + i) != '\0')
			*(dst + i) = *(src + i);
		else
			while (i < len)
				*(dst + i++) = '\0';
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	int i = 0;
	char chararray[6];


	while(i < sizeof(chararray))
	{
		if(*(ft_strncpy(chararray, "abcdefgh", sizeof(chararray)) + i) == '\0')
			printf(".");
		printf("%c", *(ft_strncpy(chararray, "abcdefgh", sizeof(chararray))) + i);
		i++;
	}
}
*/
