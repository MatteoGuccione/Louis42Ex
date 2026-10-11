#include <unistd.h>

void	ft_putchar(char c);

void	error(int x, int y)
{
	if (x == 0)
		write(1, "Error! The number you entered for x is 0!\n", 43);
	if (x < 0)
		write(1, "Error! The number you entered for x is negative!\n", 49);
	if (y == 0)
		write(1, "Error! The number you entered for y is 0!\n", 43);
	if (y < 0)
		write(1, "Error! The number you entered for y is negative!\n", 49);
}

void	print_edge(int j, int cols, int i, int rows)
{
	if (j == 0 && i == 0)
		ft_putchar('A');
	else if (j == cols - 1 && i == 0)
		ft_putchar('C');
	else if (j == 0 && i == rows - 1)
		ft_putchar('A');
	else if (j == cols - 1 && i == rows - 1)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	rush(int cols, int rows)
{
	int	i;
	int	j;

	if (cols > 0 && rows > 0)
	{
		i = 0;
		while (i < rows)
		{
			j = 0;
			while (j < cols)
			{
				if (i == 0 || i == rows - 1)
					print_edge(j, cols, i, rows);
				else if (j == 0 || j == cols - 1)
					ft_putchar('B');
				else
					ft_putchar(' ');
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	else
		error(cols, rows);
}
