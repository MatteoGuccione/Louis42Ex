/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguccion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:19:37 by mguccion          #+#    #+#             */
/*   Updated: 2026/10/21 10:19:38 by mguccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	res = 1;
	i = nb;
	if (i < 0)
		i = -i;
	while (i > 0)
	{
		res = res * i;
		i--;
	}
	if (nb < 0)
		return (-res);
	else
		return (res);
}
