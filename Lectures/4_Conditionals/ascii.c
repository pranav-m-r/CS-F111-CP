/*
ASCII (American Standard Code for Information Interchange) 
was originally developed for basic computers and printers. 
It uses a 7-bit code to represent characters.

Character | ASCII
0 - 9     | 48 - 57
A - Z     | 65 - 90
a - z     | 97 - 122
Space     | 32

https://www.ascii-code.com/
*/

#include<stdio.h>

int main()
{
    int c = 65;
    printf("c = %c\n", c);

    ///*
    char ch;

    printf("Enter a character: ");
	scanf("%c", &ch);

	if((ch >= 65)&&(ch <= 90))
	{
		printf("%c is Capital\n", ch);
	}

	else if((ch>='a') && (ch <= 'z'))
	{
		printf("%c is small\n", ch);
	}

	else if((ch>=48) &&(ch<=57))
	{
		printf("%c is a number\n", ch);
	}

	else
	{
		printf("Not a number or an alphabet\n");
	}
    //*/
    return 0;
}