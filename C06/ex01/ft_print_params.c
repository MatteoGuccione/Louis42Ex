#include <unistd.h>

int	main(int n, char **args)
{
	int		i;
	int		j;

	i = 1;
	while (i < n)
	{
		j = 0;
		while (args[i][j] != '\0')
		{
			write(1, &args[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
