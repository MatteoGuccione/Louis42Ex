#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	res = 1;
	i = nb;
	if (i < 0)
		i = -i;
	while (i > 0)
	{
		res = res * i;
		i--;
	}
	if (nb < 0)
		return (-res);
	else
		return (res);
}

// int main()
// {
// 	int resu;
// 	resu = ft_iterative_factorial(6);
// 	printf("%d", resu);
// }