#include <stdio.h>

FILE* OpenFile()
{
    char fileName[20];
    printf("Enter the file name : ");
    scanf("%s", fileName);
    FILE* ptr = fopen(fileName, "r");
    return ptr;
}