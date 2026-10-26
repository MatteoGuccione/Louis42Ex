/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguccion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:00:46 by mguccion          #+#    #+#             */
/*   Updated: 2026/10/26 14:00:47 by mguccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		valid_base(char *base);
int		get_value(char c, char *base);
int		ft_atoi_base(char *str, char *base);
char	*ft_putnbr_base(int nbr, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (!valid_base(base_from) || !valid_base(base_to))
		return (NULL);
	return (ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to));
}

int	put_digit(long n, int b, char *base, char *buf)
{
	int	len;

	len = 0;
	while (n >= b)
	{
		buf[len++] = base[n % b];
		n /= b;
	}
	buf[len++] = base[n];
	return (len);
}
