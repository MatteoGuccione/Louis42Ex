#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			filler_char[n];

	i = 0;
	dest = filler_char;
	for(i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for(; i < n ; i++)
	{
		dest[i] = '\0';
	}
	return dest;
}


int main()
{
	char *src = "Hello";
	char dest[2];

	ft_strncpy(dest,src,6);
}