#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int swapVar = *a;
    *a = *b;
    b = &swapVar;
    printf("a = %d      ",*a);
    printf("b = %d",*b);
}

int main(void)
{
    int numberA = 2;
    int *ptr_A = &numberA;
    int numberB = 4;
    int *ptr_B = &numberB;
    ft_swap(ptr_A,ptr_B);
    return 0;
}