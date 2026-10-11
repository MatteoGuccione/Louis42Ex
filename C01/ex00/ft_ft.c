#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
    printf("%d",*nbr);
}

int main(void)
{
    int number = 2;
    int *n = &number;
    ft_ft(n);
}