/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguccion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:33:17 by mguccion          #+#    #+#             */
/*   Updated: 2026/10/21 10:33:18 by mguccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*memory;
	int	index;

	if (min >= max)
		return (NULL);
	memory = malloc((max - min) * sizeof(int));
	index = 0;
	while (index < (max - min))
	{
		memory[index] = min + index;
		index++;
	}
	return (memory);
}
