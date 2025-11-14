#include "libft.h"

static int	ft_count_words(const char *s, int c)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (s[index] != '\0')
	{
		if (s[index] != c && (index == 0 || s[index - 1] == c))
			count++;
		index++;
	}
	return (count);
}

static int	ft_free_malloc(char **str_tab, int str_count)
{
	while (str_count >= 0)
	{
		free(str_tab[str_count]);
		str_count--;
	}
	free(str_tab);
	return (1);
}

static int	ft_str_malloc_copy(char **str_tab, char *s, char c)
{
	int		index;
	int		str_count;
	int		str_len;
	char	*str;

	index = 0;
	str_count = 0;
	while (s[index])
	{
		if (s[index] != c && (index == 0 || s[index - 1] == c))
		{
			str_len = 0;
			while (s[index + str_len] != c && s[index + str_len] != '\0')
				str_len++;
			str = (char *)malloc((str_len + 1) * sizeof(char));
			if (str == NULL)
				return (ft_free_malloc(str_tab, str_count));
			ft_strlcpy(str, s + index, str_len + 1);
			str_tab[str_count] = str;
			str_count++;
			index = index + str_len - 1;
		}
		index++;
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	int		n_words;
	char	**str_tab;

	if (s == NULL)
		return (NULL);
	n_words = ft_count_words(s, c);
	str_tab = (char **)malloc((n_words + 1) * sizeof (char *));
	if (str_tab == NULL)
		return (NULL);
	str_tab[n_words] = NULL;
	if (!ft_str_malloc_copy(str_tab, (char *)s, c))
		return (str_tab);
	return (NULL);
}
