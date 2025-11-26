#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cs;
	unsigned char	cc;

	cs = (unsigned char *)s;
	cc = (unsigned char)c;
	if (s == NULL)
		return (NULL);
	while (n--)
	{
		if (*cs == cc)
			return (cs);
		cs ++;
	}
	return (NULL);
}
