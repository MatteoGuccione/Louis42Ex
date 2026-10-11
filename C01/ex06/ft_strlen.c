#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int loopValue;
    loopValue = 0;
    while(str[loopValue] != '\0')
    {
        loopValue++;
    }
    return loopValue;
}

int main(void)
{
    int strLen;
    strLen = ft_strlen("Hellowwwwww");
    printf("%d",strLen);
    return 0;
}