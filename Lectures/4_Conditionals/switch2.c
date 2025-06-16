/*
//Case values should evaluate to a constant. 
//There cannot be duplicate case values.

#include<stdio.h>

int main()
{
	int i; 
	printf("Enter a digit: ");
	scanf("%d",&i);

	switch(i)
	{
		case 1:
			i += 1;
			break;
		case 1 + 1: 
			i += 2;	
			break;
		case 0 + 3:
			i += 4;
			break;		
	}

	printf("After switch, i = %d\n", i);

	return 0;
}
*/


/*
//Case constants can be evaluated to int or char
#include <stdio.h>

int main()
{

	char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    switch (ch)
    {
        case 'a':
        case 'A':
        case 'e':	
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        	printf("%c is a vowel\n", ch);
        	break;

        default:
        	printf("%c is a consonant\n", ch);
        	
    }
	return 0;
}

*/

/*
//Case can have ranges.

#include<stdio.h>

int main()
{
	char n;
	printf("Enter a character: ");
	scanf("%c",&n);
	switch(n)
	{
		case 'a' ... 'z':
			printf("%c is small\n", n);
			break;
		case 'A' ... 'Z':
			printf("%c is capital\n", n);
			break;
		case '0' ... '9':
			printf("%c is a digit\n", n);
			break;
		default:
			printf("%c is not a digit or alphabet\n", n);
	}

	return 0;
}
*/

/*
//Nested Switch Case
#include<stdio.h>

int main()
{
    int x = 10, y = 20;
    switch (x)
    {
        case 10:
            switch (x <= y)
            {
                case 0:
                    x += 10;
                default:
                    x += 20;
                    y = 10;
                    break;
            }
        default:
            x += 10;
    }
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
*/