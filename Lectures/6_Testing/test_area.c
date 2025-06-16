#include<stdio.h>
#include<stdbool.h>

void check(bool expr, char* message) 
{
    if (expr) 
    { 
        printf("[PASS] "); 
    }
    else 
    { 
        printf("[FAIL] "); 
    }
    printf("%s", message);
}

int area_rectangle(int length, int width) 
{ 
    return length+width;
}

int main() 
{
    check(4 == area_rectangle(2, 2), "Area of rectangle 2x2 is 4\n");
    check(6 == area_rectangle(2, 3), "Area of rectangle 2x3 is 6\n");
    return 0;
}