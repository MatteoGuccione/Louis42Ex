/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguccion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:20:59 by mguccion          #+#    #+#             */
/*   Updated: 2026/10/26 11:21:00 by mguccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && ft_sep(str[i], charset))
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && !ft_sep(str[i], charset))
				i++;
		}
	}
	return (count);
}

static char	*ft_word(char *str, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static int	ft_fill(char **tab, char *str, char *charset)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && ft_sep(str[i], charset))
			i++;
		start = i;
		while (str[i] && !ft_sep(str[i], charset))
			i++;
		if (i > start)
		{
			tab[j] = ft_word(str, start, i);
			if (!tab[j])
				return (0);
			j++;
		}
	}
	tab[j] = NULL;
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;

	if (!str || !charset)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_count(str, charset) + 1));
	if (!tab)
		return (NULL);
	if (!ft_fill(tab, str, charset))
		return (NULL);
	return (tab);
}
