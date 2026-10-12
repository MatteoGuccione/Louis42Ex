#include <unistd.h>

int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if(str[i]== '\0')
	{
		return 0;
	}
	while (str[i]!= '\0')
	{
		if(str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main()
{
	int result;
	char res;

	result = ft_str_is_printable("\n");
	res = result + '0';
	write(1, &res, 1);
	return (2);
}


//Trova come mettere una stringa non printabile