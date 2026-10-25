
#include "ft.h"

static void	ft_free_words(char **words)
{
	int	i;

	if (!words)
		return ;
	i = 0;
	while (words[i])
		free(words[i++]);
	free(words);
}

static void	ft_free_dict(char ***dict)
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

void	ft_print_array(char ***array)
{
	int	i;

	i = 0;
	while (array && array[i])
	{
		ft_putstr(array[i][0]);
		ft_putstr(" : ");
		ft_putstr(array[i][1]);
		ft_putchar('\n');
		i++;
	}
}

static int	ft_fill_entry(char ***array, char *row, int i)
{
	char	**tmp;
	char	**entry;
	int		j;
	int		colons;

	colons = 0;
	j = 0;
	while (row[j])
	{
		if (row[j] == ':')
			colons++;
		j++;
	}
	if (colons != 1)
		return (0);
	tmp = ft_split(row, ":");
	if (!tmp || !tmp[0] || !tmp[1] || tmp[2])
	{
		ft_free_words(tmp);
		return (0);
	}
	tmp[0] = ft_trim_spaces(tmp[0]);
	tmp[1] = ft_trim_spaces(tmp[1]);
	if (!tmp[0][0] || !tmp[1][0])
	{
		ft_free_words(tmp);
		return (0);
	}
	entry = malloc(sizeof(char *) * 3);
	if (!entry)
	{
		ft_free_words(tmp);
		return (0);
	}
	entry[0] = tmp[0];
	entry[1] = tmp[1];
	entry[2] = NULL;
	free(tmp);
	array[i] = entry;
	return (1);
}

char	***dict_to_array(char *str)
{
	char	**rows;
	char	***array;
	int		count;
	int		i;
	int		j;

	rows = ft_split(str, "\n");
	if (!rows)
		return (NULL);
	count = 0;
	while (rows[count])
		count++;
	array = malloc(sizeof(char **) * (count + 1));
	if (!array)
		return (ft_free_words(rows), NULL);
	i = 0;
	while (i <= count)
		array[i++] = NULL;
	i = 0;
	j = 0;
	while (i < count)
	{
		ft_trim_spaces(rows[i]);
		if (rows[i][0])
		{
			if (!ft_fill_entry(array, rows[i], j))
			{
				ft_free_dict(array);
				ft_free_words(rows);
				return (NULL);
			}
			j++;
		}
		i++;
	}
	array[j] = NULL;
	ft_free_words(rows);
	return (array);
}
