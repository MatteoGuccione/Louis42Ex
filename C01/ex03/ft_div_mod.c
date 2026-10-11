#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    int divValue;
    divValue = a/b;
    int modValue;
    modValue = a%b;
    div = &divValue;
    mod = &modValue;
    printf("div = %d",*div);
    printf("\n");
    printf("mod = %d",*mod);
    printf("\n");
}

int main(void)
{
    int divValue = 2;
    int *ptr_Div = &divValue;
    int modValue = 4;
    int *ptr_Mod = &modValue;
    ft_div_mod(5,2,ptr_Div,ptr_Mod);
    return 0;
}