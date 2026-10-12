#include <unistd.h>

char *ft_strupcase(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i]!='\0')
	{
		if(str[i] > 'a' && str[i] < 'z')
		{
			c = str[i] - 32;
			str[i] = c;
		}
		i++;
	}
	write(1,str,i);
	return str;
}
