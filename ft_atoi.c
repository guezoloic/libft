#include "libft.h"

int	ft_atoi(const char *str)
{
	int		value;
	size_t	len;
	size_t	i;
	int		n;

	value = 0;
	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		if (!ft_isdigit(str[i]))
			return (value);
		n = (int)(str[i] - '0');
		value *= 10;
		value += n;
		i++;
	}
	return (value);
}
