#include "libft.h"

static int	ft_inside_set(const char *set, char c, int len_set)
{
	int	index;

	index = 0;
	while (index < len_set)
	{
		if (c == set[index])
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		len_set;
	int		len_s;
	char	*cs1;

	len_set = ft_strlen(set);
	len_s = ft_strlen(s1);
	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (ft_inside_set(set, s1[start], len_set) != '\0')
		start ++;
	while (ft_inside_set(set, s1[len_s - 1], len_set) != '\0')
		len_s --;
	cs1 = ft_substr(s1, start, (len_s - start));
	return (cs1);
}
