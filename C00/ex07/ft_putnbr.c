#include <unistd.h>

void ft_putnbr(int nb)
{
    char digits[10];
    int i;
    i=0;
    while(nb>0)
    {
        digits[i] = nb%10 + '0';
        nb=nb/10;
        i++;
    }
    while(i>0)
    {
        i--;
        write(1, &digits[i], 1);
    }
    write(1, "\n", 2);
}

int main(void)
{
    ft_putnbr(400002);
    return 0;    
}