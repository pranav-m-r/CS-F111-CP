#include <stdio.h> 
#include <string.h> //Header file for string functions

void stringFunc(char str[])
{  
	//To find the length of a string - strlen(<variable>)
	int len = strlen(str);
	printf("Length = %d\n", len);


	//To copy one string to another - strcpy(destination,source)
	char str2[10];
	strcpy(str2,str);
	printf("str = %s, str2 = %s\n", str, str2);

	
	//To contatenate one string with another - strcat(string1,string2)
	//Similar to (string1 = string1 + string2)
	char str3[20] = "ABcDE";
	strcat(str,str3);
	printf("str = %s, str3 = %s\n", str, str3); 

	
	//To compare one string with another - strcmp(string1,string2)
	//Checks from the first character of both strings.
	//If first non-matching character in string1 is greater (in ASCII) than that of string2 - returns > 0
	//If first non-matching character in string1 is lesser (in ASCII) than that of string2 - returns < 0
	//If both strings are equal - returns = 0
	int result = strcmp(str2,str3);
	printf("Result of comparison = %d\n", result);

	
}  

int main()  
{  
	char str[]="ABCDE";

	/*	A collection of characters within double quotes is called a string.
		In C, string is stored in the form of a character array.

		char str[]="ABCDE"; translates to 
		char str[]={'A','B','C','D','E','\0'};
	*/
	stringFunc(str);  
	return 0;  
}