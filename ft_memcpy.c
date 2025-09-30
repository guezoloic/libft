#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*srctmp;
	char	*dsttmp;

	i = 0;
	srctmp = (char *)src;
	dsttmp = (char *)dst;
	while (i < n)
	{
		dsttmp[i] = srctmp[i];
		i++;
	}
	return (dst);
}
