#include "ft.h"

static int	ft_count_rows(char **rows)
{
	int	count;

	count = 0;
	while (rows[count])
		count++;
	return (count);
}

static char	***ft_alloc_dict(int count)
{
	char	***array;
	int		i;

	array = malloc(sizeof(char **) * (count + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (i <= count)
		array[i++] = NULL;
	return (array);
}

static char	***ft_init_dict(char *str, char ***rows, int *count)
{
	char	***array;

	*rows = ft_split(str, "\n");
	if (!*rows)
		return (NULL);
	*count = ft_count_rows(*rows);
	array = ft_alloc_dict(*count);
	if (!array)
		return (ft_free_words(*rows), NULL);
	return (array);
}

char	***dict_to_array(char *str)
{
	char	**rows;
	char	***array;
	int		count;

	array = ft_init_dict(str, &rows, &count);
	if (!array)
		return (NULL);
	if (!ft_parse_rows(array, rows))
		return (ft_free_dict(array), ft_free_words(rows), NULL);
	ft_free_words(rows);
	return (array);
}
