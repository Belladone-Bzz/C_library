#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*save;
	char	*cstr;

	cstr = (char *)str;
	if (str == NULL)
		return (NULL);
	if (c == 0)
		return (cstr + ft_strlen(cstr));
	save = NULL;
	while (*cstr)
	{
		if (*cstr == (char)c)
			save = cstr;
		cstr ++;
	}
	return (save);
}
