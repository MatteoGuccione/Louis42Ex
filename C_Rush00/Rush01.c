void	ft_putchar(char c);

void	print_edge(int j, int cols, int i, int rows)
{
	if (j == 0 && i == 0)
		ft_putchar('/');
	else if (j == cols - 1 && i == 0)
		ft_putchar('\\');
	else if (j == 0 && i == rows - 1)
		ft_putchar('\\');
	else if (j == cols - 1 && i == rows - 1)
		ft_putchar('/');
	else
		ft_putchar('*');
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
					ft_putchar('*');
				else
					ft_putchar(' ');
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
