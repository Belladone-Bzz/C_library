#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	dst_len;
	size_t	src_len;

	index = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size == 0 || size <= dst_len)
		return (src_len + size);
	while (index < (size - dst_len - 1) && src[index])
	{
		dst[dst_len + index] = src[index];
		index++;
	}
	dst[dst_len + index] = '\0';
	return (src_len + dst_len);
}
