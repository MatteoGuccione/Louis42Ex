#include <stdlib.h>

int	get_base_len(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	get_digit(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *nbr, char *base)
{
	int			i;
	int			sign;
	int			digit;
	long long	result;
	int			base_len;

	base_len = get_base_len(base);
	if (base_len == 0)
		return (0);
	i = 0;
	while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	sign = 1;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign = -sign;
		i++;
	}
	result = 0;
	digit = get_digit(nbr[i], base);
	while (digit >= 0)
	{
		result = result * base_len + digit;
		i++;
		digit = get_digit(nbr[i], base);
	}
	return ((int)(result * sign));
}

char	*ft_itoa_base(int nbr, char *base)
{
	char			buffer[35];
	char			*result;
	unsigned int	n;
	int				base_len;
	int				i;
	int				negative;

	base_len = get_base_len(base);
	if (base_len == 0)
		return (NULL);
	negative = (nbr < 0);
	if (negative)
		n = (unsigned int)(-(long long)nbr);
	else
		n = (unsigned int)nbr;
	i = 0;
	while (n >= (unsigned int)base_len)
	{
		buffer[i++] = base[n % base_len];
		n /= base_len;
	}
	buffer[i++] = base[n];
	if (negative)
		buffer[i++] = '-';
	result = malloc(i + 1);
	if (result == NULL)
		return (NULL);
	result[i] = '\0';
	n = 0;
	while (i > 0)
		result[n++] = buffer[--i];
	return (result);
}