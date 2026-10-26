/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguccion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:33:26 by mguccion          #+#    #+#             */
/*   Updated: 2026/10/21 10:33:27 by mguccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += (size - 1) * ft_strlen(sep);
	return (len);
}

int	ft_copy_str(char *dest, char *src, int pos)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[pos] = src[i];
		pos++;
		i++;
	}
	return (pos);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		pos;
	char	*final_str;

	if (size <= 0)
	{
		final_str = malloc(sizeof(char));
		if (final_str)
			final_str[0] = '\0';
		return (final_str);
	}
	final_str = malloc(sizeof(char) * (ft_total_len(size, strs, sep) + 1));
	if (!final_str)
		return (NULL);
	i = 0;
	pos = 0;
	while (i < size)
	{
		pos = ft_copy_str(final_str, strs[i], pos);
		if (i < size - 1)
			pos = ft_copy_str(final_str, sep, pos);
		i++;
	}
	final_str[pos] = '\0';
	return (final_str);
}
