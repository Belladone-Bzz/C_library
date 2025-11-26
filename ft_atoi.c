#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	index;
	int	sign;
	int	result;

	index = 0;
	sign = 1;
	result = 0;
	while ((nptr[index] >= 9 && nptr[index] <= 13) || nptr[index] == 32)
		index ++;
	if (nptr[index] == '-' || nptr[index] == '+')
	{
		if (nptr[index] == '-')
			sign = -1;
		index ++;
	}
	while (ft_isdigit(nptr[index]) && nptr[index] != '\0')
	{
		result = ((result * 10) + (nptr[index] - '0'));
		index ++;
	}
	return (result * sign);
}
