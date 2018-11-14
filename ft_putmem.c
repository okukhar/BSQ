
#include "libft.h"

void	ft_putmem(void *s, int a)
{
	int i;

	i = 0;
	while(i < a)
	{
		write(1, (char *)(s + i), 1);
		i++;
	}
}
