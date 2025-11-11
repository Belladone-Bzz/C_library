#include "libft.h"

void	*ft_bzero(void *src, size_t n)
{
	unsigned char	*csrc;

	csrc = (unsigned char *)src;
	while (n--)
		csrc[n] = 0;
	return (csrc);
}
