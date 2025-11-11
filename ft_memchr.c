#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*cstr;
	unsigned char	cc;

	cstr = (unsigned char *)str;
	cc = (unsigned char)c;
	if (cstr == NULL)
		return (NULL);
	while (n--)
	{
		if (*cstr == cc)
			return (cstr);
		cstr ++;
	}
	return (NULL);
}
