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

int	ft_parse_row(char ***array, char *row, int index)
{
	int	i;
	int	j;

	i = 0;
	while (row[i] && row[i] != ':')
		i++;
	if (!row[i])
		return (0);
	array[index][0] = ft_strdup_range(row, 0, i);
	if (!array[index][0])
		return (0);
	i++;
	while (row[i] == ' ')
		i++;
	j = ft_strlen(row + i);
	array[index][1] = ft_strdup(row + i);
	if (!array[index][1])
		return (free(array[index][0]), 0);
	return (1);
}
