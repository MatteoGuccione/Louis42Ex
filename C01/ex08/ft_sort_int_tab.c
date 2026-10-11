#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    i=0;
    while(i<size-1)
    {
        if(tab[i] > tab[i+1]) 
        {
            int tempVar;
            tempVar = tab[i];
            tab[i] = tab[i+1]; 
            tab[i+1] = tempVar; 
            i=0;
        }
        else
        {
            i++;
        }
    }
    int loopValue;
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
    int values[5] = {6,3,4,2,8};
    int *tab = values;
    ft_sort_int_tab(tab, 5);
    return 0;
}