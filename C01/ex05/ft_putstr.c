/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguccion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 09:49:15 by mguccion          #+#    #+#             */
/*   Updated: 2026/10/21 09:49:18 by mguccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	loop_value;

	loop_value = 0;
	while (str[loop_value] != '\0')
	{
		write(1, &str[loop_value], 1);
		loop_value++;
	}
}
