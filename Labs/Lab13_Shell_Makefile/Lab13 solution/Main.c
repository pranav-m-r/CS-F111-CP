#include <stdio.h>
#include <string.h>
#include "Open.h"
#include "Input.h"
#include "Search.h"

int main()
{
    FILE* ptr = OpenFile();
    if(ptr == NULL)
    {
        printf("The file does not exist!");
        return 0;
    }

    char target[100];
    Input(target);
    
    int count = Count(target, ptr);
    printf("Frequency of the word in the file = %d\n", count);

    fclose(ptr);

    return 0;
}