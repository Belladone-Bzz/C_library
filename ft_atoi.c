#include "libft.h"

int	ft_atoi(const char *str)
{
	int	index;
	int	negatif;
	int	result;

	index = 0;
	negatif = 1;
	result = 0;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
		index ++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			negatif = -1;
		index ++;
	}
	while (ft_isdigit(str[index]) && str[index] != '\0')
	{
		result = ((result * 10) + (str[index] - '0'));
		index ++;
	}
	return (result * negatif);
}
