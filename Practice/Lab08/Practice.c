#include <stdio.h>

char* rmdup(char* str, char* final)
{
    int c = 0, i = 1;
    final[0] = str[0];
    while (str[i-1] != '\0')
    {
        if (final[c] != str[i])
        {
            c++;
            final[c] = str[i];
        }
        i++;
    }
    return final;
}

int main()
{
    char input[20], output[20];
    printf("Enter the string: ");
    scanf("%[^\n]s", input);
    printf("%s\n", rmdup(input, output));
}