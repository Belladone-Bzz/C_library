#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;
	size_t	little_len;

	if (!*little)
		return ((char *)big);
	if (little == NULL || big == NULL || len == 0)
		return (NULL);
	index = 0;
	little_len = ft_strlen(little);
	while (index <= len - little_len && big[index] != '\0')
	{
		if (ft_strncmp(big + index, little, little_len) == 0)
			return ((char *)big + index);
		index ++;
	}
	return (NULL);
}
