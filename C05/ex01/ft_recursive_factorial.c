#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	int	i;
	int res;

	i = 1;
	res = nb;
	while (i <= nb)
	{
		res = res * i;
		i++;
	}
	
}

int main()
{
	int resu;
	resu = ft_recursive_factorial(6);
	printf("%d", resu);
}