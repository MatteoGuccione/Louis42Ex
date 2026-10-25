#include "ft.h"

int	ft_match_print(char c, char **entry, int index)
{
	if (index == 0 && entry[0][0] == c)
		return (1);
	if (index == 1 && entry[0][0] == c)
		return (1);
	if (index == 2 && ft_strlen(entry[0]) == 2
		&& entry[0][0] == c)
		return (1);
	return (0);
}

void	ft_print_entry(char *value, int index)
{
	ft_putstr(value);
	if (index == 0)
		ft_putstr(" hundred");
}

void	ft_print_scale(char *str, char ***dict)
{
	int	j;
	int	len;

	len = ft_strlen(str);
	if (len <= 3)
		return ;
	j = -1;
	while (dict[++j] && dict[j][0])
	{
		if (ft_strlen(dict[j][0]) == len)
		{
			ft_putstr(dict[j][1]);
			ft_putchar(' ');
			break ;
		}
	}
}
