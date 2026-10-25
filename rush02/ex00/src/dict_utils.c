#include "ft.h"

void	ft_free_words(char **words)
{
	int	i;

	if (!words)
		return ;
	i = 0;
	while (words[i])
		free(words[i++]);
	free(words);
}

void	ft_free_dict(char ***dict)
{
	int	i;

	if (!dict)
		return ;
	i = 0;
	while (dict[i])
	{
		free(dict[i][0]);
		free(dict[i][1]);
		free(dict[i]);
		i++;
	}
	free(dict);
}

void	ft_trim_inplace(char *str)
{
	int	start;
	int	end;
	int	i;

	start = 0;
	while (str[start] == ' ' || str[start] == '\t')
		start++;
	end = (int)ft_strlen(str) - 1;
	while (end >= start
		&& (str[end] == ' ' || str[end] == '\t'))
		end--;
	i = 0;
	while (start <= end)
		str[i++] = str[start++];
	str[i] = '\0';
}

char	*ft_strdup_range(char *str, int start, int len)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = str[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
