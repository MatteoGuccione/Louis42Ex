/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 13:45:20 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/25 17:12:44 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

int	ft_nbrlen(int nbr)
{
	int	len;

	len = 0;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

int	ft_create_int(int nb, char c)
{
	nb = nb * 10;
	nb += c - 48;
	return (nb);
}

int	ft_atoi(char *str)
{
	unsigned int	i;
	int				nb;
	int				minus;
	int				sign;

	nb = 0;
	minus = 0;
	sign = 1;
	i = 0;
	if (str[i] != ' ' && str[i] != '+' && str[i] != '-')
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
	while (str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			minus++;
	if (minus % 2)
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
		nb = ft_create_int(nb, str[i++]);
	return (sign * nb);
}

void	ft_putnbr(int nbr)
{
	if (-nbr == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 10)
		ft_putchar(nbr / 10);
	ft_putchar('0' + nbr % 10);
}
