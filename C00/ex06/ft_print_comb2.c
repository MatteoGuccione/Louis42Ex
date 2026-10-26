/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguccion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 10:51:11 by mguccion          #+#    #+#             */
/*   Updated: 2026/10/12 10:51:13 by mguccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int special_char)
{
	write(1, &c, 1);
	if (special_char == 1)
		write(1, " ", 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	c;

	c = 'a';
	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			c = a / 10 + '0';
			ft_putchar(c, 0);
			c = a % 10 + '0';
			ft_putchar(c, 1);
			c = b / 10 + '0';
			ft_putchar(c, 0);
			c = b % 10 + '0';
			ft_putchar(c, 0);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
