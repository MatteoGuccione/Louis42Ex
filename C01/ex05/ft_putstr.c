#include <unistd.h>

void ft_putstr(char *str)
{
    int loopValue;
    loopValue = 0;
    while(str[loopValue] != '\0')
    {
        write(1,&str[loopValue],1);
        loopValue++;
    }
}

int main(void)
{
    ft_putstr("Hello");
    return 0;
}