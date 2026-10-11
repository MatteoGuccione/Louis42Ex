#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int loopValue;
    loopValue = 0;
    int swapVar;
    swapVar = 0;
    while(loopValue<size/2)
    {
        swapVar = tab[loopValue];
        tab[loopValue]=tab[size-loopValue-1];
        tab[size-loopValue-1] = swapVar;
        loopValue++;
    }
    loopValue = 0;
    while(loopValue<size)
    {
        printf("%d",tab[loopValue]);
        printf("\n");
        loopValue++;
    }

}

int main(void)
{
    int values[5];
    for(int i=0;i<5;i++)
    {
        values[i] = i;
    }
    int *tab = values;
    ft_rev_int_tab(tab, 5);
    return 0;
}