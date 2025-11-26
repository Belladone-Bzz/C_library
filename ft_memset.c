#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*csrc;
	unsigned char	letter;

	csrc = (unsigned char *)s;
	letter = (unsigned char)c;
	while (n--)
		csrc[n] = letter;
	return (csrc);
}
