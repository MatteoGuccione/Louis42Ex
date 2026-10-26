/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguccion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:20:15 by mguccion          #+#    #+#             */
/*   Updated: 2026/10/21 10:20:16 by mguccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
