#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*sjoined;
	size_t	lens1;
	size_t	lens2;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	sjoined = malloc((lens1 + lens2 + 1) * sizeof (char));
	if (sjoined == NULL)
		return (NULL);
	ft_strlcpy(sjoined, s1, lens1 + 1);
	ft_strlcat(sjoined, s2, lens1 + lens2 + 1);
	return (sjoined);
}
