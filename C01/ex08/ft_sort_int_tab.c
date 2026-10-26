/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguccion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 09:49:36 by mguccion          #+#    #+#             */
/*   Updated: 2026/10/21 09:49:37 by mguccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp_var;

	temp_var = 0;
	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp_var = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp_var;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
