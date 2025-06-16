/*
Write a function that takes in a string and a key as parameters. 
Return the number of times the key is found in the string.
*/

#include<stdio.h>
#include<string.h>

int count(char str[], char key[])
{
    int m = strlen(str);
    int n = strlen(key);
    int f = 0;
    char temp[n+1];
 
    for (int i = 0; i <= m - n; i++) 
    {
        int c = 0;
        for(int j = i; j < i + n; j++)
            temp[c++] = str[j];
        temp[c] = '\0';    
        
        if (strcmp(temp,key) == 0) 
        {
            f++;
        }
    }
    return f;
}
 
int main()
{
    char str[20], key[10];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter the key to search: ");
    scanf("%s", key);
    printf("%s appeared in %s %d times.\n", key, str, count(str, key));
    return 0;
}