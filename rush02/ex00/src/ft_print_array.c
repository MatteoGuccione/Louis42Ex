#include "ft.h"

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
