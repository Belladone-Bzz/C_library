#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	index;

	index = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (index < size - 1 && src[index] != '\0')
	{
		dst[index] = src[index];
		index ++;
	}
	dst[index] = '\0';
	return (src_len);
}
