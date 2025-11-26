#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*cs;
	char	cc;

	cs = (char *)s;
	cc = (char)c;
	if (c == 0)
		return (cs + ft_strlen(cs));
	while (*cs)
	{
		if (*cs == cc)
			return (cs);
		cs++;
	}
	return (NULL);
}
