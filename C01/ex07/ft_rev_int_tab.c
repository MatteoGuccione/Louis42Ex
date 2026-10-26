/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguccion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 09:49:29 by mguccion          #+#    #+#             */
/*   Updated: 2026/10/21 09:49:31 by mguccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	loop_value;
	int	swap_var;

	loop_value = 0;
	swap_var = 0;
	while (loop_value < size / 2)
	{
		swap_var = tab[loop_value];
		tab[loop_value] = tab[size - loop_value - 1];
		tab[size - loop_value - 1] = swap_var;
		loop_value++;
	}
}
