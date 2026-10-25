#include "ft.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	if (!src)
		return ("");
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

int	ft_is_separator(char *str, char *sep)
{
	int	i;
	int	s_len;

	if (!str)
		return (0);
	s_len = ft_strlen(sep);
	i = 0;
	while (str[i] && i < s_len)
	{
		if (str[i] != sep[i])
			return (0);
		i++;
	}
	return (i == s_len);
}

int	ft_count_words(char *str, char *sep)
{
	int	i;
	int	sep_len;

	if (!str || !sep || !sep[0])
		return (0);
	sep_len = ft_strlen(sep);
	i = 0;
	while (ft_is_separator(str + i, sep))
		i += sep_len;
	if (!str[i])
		return (0);
	while (str[i] && !ft_is_separator(str + i, sep))
		i++;
	return (1 + ft_count_words(str + i, sep));
}
