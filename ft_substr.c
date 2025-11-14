#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	lens;
	size_t	lensubs;

	lens = ft_strlen(s);
	if (start > lens)
		return (ft_calloc(0, 0));
	if (lens - start < len)
		lensubs = lens - start + 1;
	else
		lensubs = len + 1;
	subs = malloc(lensubs);
	if (subs == NULL)
		return (NULL);
	ft_strlcpy(subs, s + start, lensubs);
	return (subs);
}
