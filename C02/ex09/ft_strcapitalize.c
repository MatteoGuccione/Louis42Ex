#include <unistd.h>

char *ft_strcapitalize(char *str)
{
	int i;
	char c;

	i=0;
	while (str[i] != '\0')
	{
		if(i != 0 && str[i-1]==' ' && (str[i] > 'a' && str[i] < 'z'))
		{
			c = str[i] - 32;
			str[i] = c;
		}
		i++;
	}
	write(1,str,i);
	return str;
}

int main()
{
	char str[] = "3iao the world Io";
	ft_strcapitalize(str);
}