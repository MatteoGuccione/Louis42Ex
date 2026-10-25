/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loguicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 14:59:55 by loguicha          #+#    #+#             */
/*   Updated: 2026/10/25 17:17:17 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_print(char c, char ***dict, int index)
{
	int	i;

	i = -1;
	while (dict[++i] && dict[i][0])
	{
		if (index == 0)
		{
			if (dict[i][0][0] == c)
			{
				ft_putstr(dict[i][1]);
				ft_putstr(" hundred");
				break ;
			}
		}
		else if (index == 2)
		{
			if (ft_strlen(dict[i][0]) == 2 && dict[i][0][0] == c)
			{
				ft_putstr(dict[i][1]);
				break ;
			}
		}
		else if (index == 1)
		{
			if (dict[i][0][0] == c)
			{
				ft_putstr(dict[i][1]);
				break ;
			}
		}
	}
	ft_putchar(' ');
}

void	ft_read_from_left(char *str, char ***dict)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(str);
	printf("len %i\n", len);
	i = -1;
	while (str[++i])
	{
		ft_print(str[i], dict, ft_strlen(str + i) % 3);
		j = -1;
		while (dict[++j])
		{
			if (ft_strlen(str + i) > 3 && ft_strlen(dict[j][0]) == ft_strlen(str
					+ i))
			{
				ft_putstr(dict[j][1]);
				ft_putchar(' ');
				break ;
			}
		}
	}
}

void	ft_print_digit(int nb, char ***dict)
{
	int	i;

	write(1, "here\n", 5);
	i = -1;
	while (dict[++i] && dict[i][0])
		if (ft_atoi(dict[i][0]) == nb)
			ft_putstr(dict[i][1]);
}
