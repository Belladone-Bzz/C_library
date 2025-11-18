#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		index;
	char	*new_str;
	int		len;

	len = ft_strlen(s);
	new_str = malloc ((len + 1) * sizeof (char));
	if (!new_str)
		return (NULL);
	index = 0;
	while (index < len)
	{
		new_str[index] = (*f)(index, s[index]);
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}
