#include <stdio.h>
#include <string.h>

int Count(char target[], FILE* ptr)
{
    int count = 0;
    char current[100];
    while(fscanf(ptr, "%s", current) != EOF)
    {
        if(strcmp(target, current) == 0)
        count++;
    }
    return count;
}