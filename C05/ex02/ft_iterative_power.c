// #include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	i = 1;
	if(nb == 0 || power < 0)
		return (0);
	if(power == 0)
		return (1);
	res = nb;
	if(nb < 0)
		res = -res;
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	if((nb < 0 && i%2 != 0))
		return (-res);
	return (res);
}

// int main()
// {
// 	int resu;
// 	resu = ft_iterative_power(-2,2);
// 	printf("%d", resu);
// }