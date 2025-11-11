#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*cstr;
	char	cc;

	cstr = (char *)str;
	cc = (char)c;
	if (cstr == NULL)
		return (NULL);
	if (c == 0)
		return (cstr + ft_strlen(cstr));
	while (*cstr)
	{
		if (*cstr == cc)
			return (cstr);
		cstr++;
	}
	return (NULL);
}
