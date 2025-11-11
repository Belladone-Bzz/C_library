#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*membloc;
	size_t			total_len;

	total_len = nmemb * size;
	if (nmemb <= 0 || size <= 0)
	{
		membloc = malloc(1);
		if (membloc == NULL)
			return (NULL);
		membloc[0] = '\0';
		return (membloc);
	}
	if (nmemb > (__SIZE_MAX__ / size) || total_len > __INT_MAX__)
		return (NULL);
	membloc = malloc(total_len);
	if (membloc == NULL)
		return (NULL);
	ft_bzero(membloc, total_len);
	return (membloc);
}
