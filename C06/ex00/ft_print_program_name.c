#include <unistd.h>

int main(int n, char **args)
{
	int i;
	char c;	

	if(n == 0)
		return (0);
	i = 0;
	while(args[0][i] != '\0')
	{
		c = args[0][i];
		write(1, &c, 1);
		i++;
	}
}