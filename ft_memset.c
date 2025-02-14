#include <stdio.h>
#include "libft.h"

void *ft_memset(void *b, int n, size_t len)
{
	unsigned char * bb;
	size_t  i;
	
	bb = (unsigned char *)b;
	n = (unsigned char)n;
	i = 0;
	while(i < len)
	{
		bb[i] = n;
		i++;
	}
	return (void *)bb;
}


