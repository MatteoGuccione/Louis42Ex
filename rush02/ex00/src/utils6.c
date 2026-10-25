#include "ft.h"

static char	*ft_get_word(char *str, char *sep)
{
	char	*word;
	int		len;

	len = 0;
	while (str[len] && !ft_is_separator(str + len, sep))
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strncpy(word, str, len);
	word[len] = '\0';
	return (word);
}

static char	**ft_free_array(char **array, int n)
{
	while (n > 0)
		free(array[--n]);
	free(array);
	return (NULL);
}

static char	**ft_fill_array(char **array, char *str, char *sep, int words)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (w < words)
	{
		while (ft_is_separator(str + i, sep))
			i += ft_strlen(sep);
		array[w] = ft_get_word(str + i, sep);
		if (!array[w])
			return (ft_free_array(array, w));
		i += ft_strlen(array[w]);
		w++;
	}
	array[w] = NULL;
	return (array);
}

char	**ft_split(char *str, char *sep)
{
	char	**array;
	int		words;

	if (!str || !sep || !sep[0])
		return (NULL);
	words = ft_count_words(str, sep);
	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	return (ft_fill_array(array, str, sep, words));
}
