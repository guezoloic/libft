#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	slen;
	size_t	dlen;
	size_t	i;
	
	dlen = 0;
	slen = 0;
	while (dst[dlen] && dlen < dstsize)
		dlen++;
	while (src[slen])
		slen++;
	if (dlen < dstsize)
	{
		i = 0;
		while (src[i] && dlen + i + 1 < dstsize)
		{
			dst[dlen + i] = src[i];
			i++;
		}
		if (dlen + i < dstsize)
			dst[dlen + i] = '\0';
	}

	return (dlen + slen);
}
