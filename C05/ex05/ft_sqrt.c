#include <stdio.h>

int ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i * i <= nb)
	{
		i++;
	}
	return (i);
}

int main()
{
	int resu;
	resu = ft_sqrt(12);
	printf("%d",resu);
}