#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	copy = (char *)malloc(len);
	if (copy == NULL)
		return (NULL);
	copy = ft_memcpy(copy, s, len);
	return (copy);
}
