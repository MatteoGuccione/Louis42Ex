#include "ft.h"

char	*ft_trim_spaces(char *str)
{
	int	start;
	int	end;
	int	i;

	start = 0;
	while (str[start] == ' ' || str[start] == '\t')
		start++;
	end = ft_strlen(str) - 1;
	while (end >= start && (str[end] == ' ' || str[end] == '\t'))
		end--;
	i = 0;
	while (start <= end)
		str[i++] = str[start++];
	str[i] = '\0';
	return (str);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
