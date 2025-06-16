#include<stdio.h>

struct example1
{
    char x;
    char a;
    int y;
    double z;
};

struct example2
{
    char x;
    double z;
    char a;
    int y;
};

int main()
{
    struct example1 e1;
    struct example2 e2;
    printf("Size of example1 is: %d\nSize of example2 is: %d\n", sizeof(e1), sizeof(e2));
    return 0;
}
