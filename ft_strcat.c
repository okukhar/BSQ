/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:22:27 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/10 23:07:52 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

char		*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int i;

	i = ft_strlen(s1);
	while (*(s2 + i) != '\0')
	{
		*(s1 + i) = *(s2 + i);
		i++;
	}
	*(s1 + i) = '\0';
	return (s1);
}
