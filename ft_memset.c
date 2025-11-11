#include "libft.h"

void	*ft_memset(void *src, int c, size_t n)
{
	unsigned char	*csrc;
	unsigned char	letter;

	csrc = (unsigned char *)src;
	letter = (unsigned char)c;
	while (n--)
		csrc[n] = letter;
	return (csrc);
}
