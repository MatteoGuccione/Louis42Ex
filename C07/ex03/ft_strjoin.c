#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep)
{
	int array_size;
	int i;
	int j;
	int x;
	int k;
	char *final_str;

	if(size == 0)
	{
		final_str = malloc(1);
    	if(final_str)
        	final_str[0] = '\0';
    	return final_str;
	}
	array_size = 0;
	i = 0;
	while(i < size)
	{
		j = 0;
		while(strs[i][j])
		{
			array_size++;
			j++;
		}
		i++;
	}
	i = 0;
	while(sep[i])
		i++;
	array_size += (size - 1) * i;
	final_str = malloc(sizeof(char) * (array_size+1));
	x = 0;
	i = 0;
	while(i < size)
	{
		j = 0;
		while(strs[i][j])
			final_str[x++] = strs[i][j++];
		if(i < size - 1)
		{
			k = 0;
			while(sep[k])
				final_str[x++] = sep[k++];
		}
		i++;
	}
	final_str[x] = '\0';
	return final_str;
}

int main()
{
	char *strs[] = {"Ciao", "Mondo", "42"};
    char *sep = ", ";
    char *result;

    result = ft_strjoin(3, strs, sep);
    if (result == NULL)
        return (1);
    printf("%s\n", result);
    free(result);
    return (0);
}