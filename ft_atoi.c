#include "libft.h"

int	ft_atoi(const char *str)
{
	int		value;
	size_t	i;
	int		is_negative;

	value = 0;
	i = 0;
	is_negative = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		is_negative = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && ft_isdigit(str[i]))
	{
		value *= 10 + ((int)(str[i] - '0'));
	}
	if (is_negative)
		return (value * -1);
	else
		return (value);
}
