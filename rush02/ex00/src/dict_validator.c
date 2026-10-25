#include "ft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	ft_has_key(char ***dict, char *key)
{
	int	i;

	i = 0;
	while (dict && dict[i])
	{
		if (dict[i][0] && ft_strcmp(dict[i][0], key) == 0)
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_required_keys(char ***reference, char ***custom)
{
	int	i;

	i = 0;
	while (reference && reference[i])
	{
		if (!ft_has_key(custom, reference[i][0]))
			return (0);
		i++;
	}
	return (1);
}

char	***ft_load_dict(char *path)
{
	int		fd;
	int		size;
	char	*text;
	char	***dict;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (NULL);
	text = malloc(7000);
	if (!text)
		return (close(fd), NULL);
	size = read(fd, text, 6999);
	close(fd);
	if (size < 0)
		return (free(text), NULL);
	text[size] = '\0';
	dict = dict_to_array(text);
	free(text);
	return (dict);
}
