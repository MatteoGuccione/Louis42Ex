// #include <stdio.h>
int	ft_find_next_prime(int nb)
{
	int	i;
	int	next_number;

	i = 2;
	if (nb < 3)
		next_number = 2;
	else
		next_number = nb + 1;
	while (i < next_number)
	{
		if (next_number % i == 0)
		{
			i = 1;
			next_number++;
		}
		i++;
	}
	return (next_number);
}

// int main()
// {
// 	int res;
// 	res = ft_find_next_prime(21);
// 	printf("%d", res);
// }