#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int divValue;
    divValue = (*a)/(*b);
    int modValue;
    modValue = (*a)%(*b);
    a = &divValue;
    b = &modValue;
    printf("div = %d",*a);
    printf("\n");
    printf("mod = %d",*b);
    printf("\n");
}

int main(void)
{
    int a = 5;
    int *ptr_A = &a;
    int b = 2;
    int *ptr_B = &b;
    ft_ultimate_div_mod(ptr_A,ptr_B);
    return 0;
}