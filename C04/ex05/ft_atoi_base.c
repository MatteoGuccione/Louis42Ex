/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguccion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:37:56 by mguccion          #+#    #+#             */
/*   Updated: 2026/10/14 10:37:58 by mguccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13)
			|| base[i] == ' ')
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
	return (i >= 2);
}

int	ft_get_digit(char c, char *base)
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

int	ft_get_result(char *str, char *base, int base_len, int index)
{
	int	result;
	int	i;
	int	digit;

	i = index;
	result = 0;
	digit = ft_get_digit(str[i], base);
	while (digit >= 0)
	{
		result = result * base_len + digit;
		i++;
		digit = ft_get_digit(str[i], base);
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	base_len;

	if (!ft_check_base(base))
		return (0);
	i = 0;
	sign = 1;
	result = 0;
	base_len = 0;
	while (base[base_len])
		base_len++;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	result = ft_get_result(str, base, base_len, i);
	return (result * sign);
}

// int main()
// {
// 	int res;

// 	res = ft_atoi_base(" ---+--+1234ab567", "0123456789");
// 	printf("%d",res);
// }