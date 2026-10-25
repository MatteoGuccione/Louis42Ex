/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:19:01 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/25 17:19:06 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

static void	ft_print_tens(int nbr, char ***dict)
{
	int	i;

	i = -1;
	while (dict[++i])
	{
		if (ft_atoi(dict[i][0]) == (nbr / 10 * 10))
		{
			ft_putstr(dict[i][1]);
			ft_putchar(' ');
		}
	}
}

void	ft_nb_to_words(int nbr, char ***dict, int size)
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
	if (nbr <= 19)
		ft_print_digit(nbr, dict);
	else if (nbr >= 20 && nbr % 10 == 0)
	{
		ft_print_digit(nbr, dict);
		ft_nb_to_words(nbr / 10, dict, size);
	}
	else if (nbr >= 20)
	{
		ft_print_tens(nbr, dict);
		ft_nb_to_words(nbr % 10, dict, size);
	}
	ft_putchar(' ');
}

static void	ft_print_dict_value(int nbr, char ***dict)
{
	int	i;

	i = -1;
	while (dict[++i])
	{
		if (ft_atoi(dict[i][0]) == nbr)
		{
			ft_putstr(dict[i][1]);
			return ;
		}
	}
}

void	ft_print_nb(int nbr, char ***dict)
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
	{
		ft_print_dict_value((nbr / 10) * 10, dict);
		if (nbr % 10 != 0)
		{
			ft_putchar(' ');
			ft_print_nb(nbr % 10, dict);
		}
		return ;
	}
	ft_print_dict_value(nbr, dict);
}
