/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguccion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:00:42 by mguccion          #+#    #+#             */
/*   Updated: 2026/10/26 14:00:43 by mguccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	put_digit(long n, int b, char *base, char *buf);

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	valid_base(char *base)
{
	int	i;
	int	j;

	if (!base || base_len(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] <= 32 || base[i] == 127
			|| base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
			if (base[i] == base[j++])
				return (0);
		i++;
	}
	return (1);
}

int	get_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	if (base[i] == '\0')
		return (-1);
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	s;
	int	d;
	int	i;

	n = 0;
	s = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			s = -s;
	}
	d = get_value(str[i], base);
	while (d >= 0)
	{
		n = n * base_len(base) + d;
		i++;
		d = get_value(str[i], base);
	}
	return (n * s);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	char	buf[35];
	char	*out;
	long	n;
	int		len;
	int		i;

	n = nbr;
	i = 0;
	if (n < 0)
		n = -n;
	len = put_digit(n, base_len(base), base, buf);
	if (nbr < 0)
		buf[len++] = '-';
	out = malloc(len + 1);
	if (!out)
		return (NULL);
	i = 0;
	while (len > 0)
		out[i++] = buf[--len];
	out[i] = '\0';
	return (out);
}
