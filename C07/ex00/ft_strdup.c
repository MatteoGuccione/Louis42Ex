/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguccion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:33:12 by mguccion          #+#    #+#             */
/*   Updated: 2026/10/21 10:33:13 by mguccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		size;
	char	*strcopy;

	size = 0;
	while (str[size])
		size++;
	strcopy = malloc(sizeof(char) * (size + 1));
	if (!strcopy)
		return (NULL);
	size = 0;
	while (str[size])
	{
		strcopy[size] = str[size];
		size++;
	}
	strcopy[size] = '\0';
	return (strcopy);
}
