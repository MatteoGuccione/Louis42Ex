#include "ft.h"

void	ft_print(char c, char ***dict, int index)
{
	int	i;

	i = -1;
	while (dict[++i] && dict[i][0])
	{
		if (ft_match_print(c, dict[i], index))
		{
			ft_print_entry(dict[i][1], index);
			break ;
		}
	}
	ft_putchar(' ');
}

void	ft_read_from_left(char *str, char ***dict)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		ft_print(str[i], dict, ft_strlen(str + i) % 3);
		ft_print_scale(str + i, dict);
	}
}

void	ft_print_digit(int nb, char ***dict)
{
	int	i;

	i = -1;
	while (dict[++i] && dict[i][0])
	{
		if (ft_atoi(dict[i][0]) == nb)
		{
			ft_putstr(dict[i][1]);
			break ;
		}
	}
}
