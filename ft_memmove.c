#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*cdest;
	unsigned char	*csrc;
	size_t			index;

	index = 0;
	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if (src < dest)
	{
		while (n--)
			cdest[n] = csrc[n];
	}
	else
	{
		while (index < n)
		{
			cdest[index] = csrc[index];
			index ++;
		}
	}
	return (cdest);
}
