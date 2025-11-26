#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*save;
	char	*cs;

	cs = (char *)s;
	if (c == 0)
		return (cs + ft_strlen(cs));
	save = NULL;
	while (*cs)
	{
		if (*cs == (char)c)
			save = cs;
		cs ++;
	}
	return (save);
}
