#include <unistd.h>

int main(int n, char **args)
{
	int		i;
	int		j;
	char	c;

	i = 1;
	while (i < n)
	{
		j = 0;
		while (args[i][j] != '\0')
		{
			c = args[i][j];
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}

	return (0);
}