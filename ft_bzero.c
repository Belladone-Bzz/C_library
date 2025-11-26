#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*cs;

	cs = (unsigned char *)s;
	while (n--)
		cs[n] = 0;
}
