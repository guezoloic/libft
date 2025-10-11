#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char *ptr;
	
	i = 0;
	ptr = (const unsigned char *)s;
	while (i < n)
	{
		if ((unsigned char)c == ptr[i])
			return ((void*)(ptr+i));
		i++;
	}

	return NULL;
}