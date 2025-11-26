#include "libft.h"

static int	ft_str_len(long int nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

static char	*ft_str_memory(int len)
{
	char	*str;

	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	int			str_len;
	char		*str;
	long int	number;

	number = n;
	str_len = ft_str_len(number);
	str = ft_str_memory(str_len);
	if (number == 0)
		str[0] = '0';
	str[str_len] = 0;
	if (n < 0)
	{
		str[0] = '-';
		number = -number;
	}
	while (number)
	{
		str[str_len - 1] = ((number % 10) + '0');
		number /= 10;
		str_len --;
	}
	return (str);
}
