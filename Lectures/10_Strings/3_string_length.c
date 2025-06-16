#include<stdio.h>

int main()
{
    char name[20] = "";

    int i = 0;
    while(name[i] != '\0')
        i++;

    printf("Length of %s = %d\n", name, i);    

    //What if name[] is an empty string?

    return 0;
}