#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*c1;
	char	*c2;
	int		i;

	c1 = (char *)s1;
	c2 = (char *)s2;
	i = 0;
	while (i < n && c1[i] == c2[i])
		i++;
	if (i == n) return (0);
	return (c1[i] - c2[i]);
}
