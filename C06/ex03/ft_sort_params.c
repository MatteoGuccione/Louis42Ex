#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;
	char	*c_array;

	if(argc < 2)
		return (0);
	i = 1;
	while (i < argc -1)
	{
		j = 0;
		while (argv[i+1][j])
		{
			if(argv[i+1][j] <  argv[i][j])
			{
				c_array = argv[i];
				argv[i] = argv[i+1];
				argv[i+1] = c_array;
				i = 1;
				j = 0;
			}
			else
			{
				j++;
			}
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			c = argv[i][j];
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}

	return (0);
}