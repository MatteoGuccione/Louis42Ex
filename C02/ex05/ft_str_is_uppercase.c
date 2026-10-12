#include <unistd.h>

int ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i]!= '\0')
	{
		if(str[i] < 'A' || str[i] > 'Z')
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

	result = ft_str_is_uppercase("ZaZ");
	res = result + '0';
	write(1, &res, 1);
	return (2);
}