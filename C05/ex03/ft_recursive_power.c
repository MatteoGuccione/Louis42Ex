//#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

// int main()
// {
// 	int resu;
// 	resu = ft_recursive_power(-2,2);
// 	printf("%d", resu);
// }