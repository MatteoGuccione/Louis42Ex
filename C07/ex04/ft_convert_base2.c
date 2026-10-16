int ft_get_lenght(char* str)
{
	int lenght;

	lenght = 0;
	while(str[lenght])
		lenght++;
	return (lenght);
}

int ft_get_sing(char* str)
{
	int sign;
	int index;

	sign = 1;
	index = 0;
	while(str[index])
	{
		if(str[index] == '-')
			sign = -sign;
		index++;
	}
	return (sign);
}

int ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while(base[i])
	{
		if(base[i] == '-' || base[i] == '+' || base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
		{
			return (0);
		}
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i >= 2);
}

int ft_convert_string_to_int(char *nbr)
{
	int number;
	int index;

	index = 0;
	number = 0;
	while(nbr[i])
	{
		number += (nbr - '0');
		index++;
	}
	return (number)
}

int ft_convert_int(int n, char *base_from, char *base_to)
{
	int base_to_length;
	int index;

	base_to_length = ft_get_lenght(base_to);
	n = n % base_to_length;
	index = 0;
	while(base_to[index])
	{
		if()
	}
}