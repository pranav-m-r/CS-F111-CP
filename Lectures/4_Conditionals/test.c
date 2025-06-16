#include<stdio.h>

/*
int main()
{
	int a = 1;
	int b = a++;
	if(b < a) 
		printf(“If Statement is executed!”);
	return 0;
}
*/
//----------------------------------------------
/*
int main()
{
    int a=0;
    if(!a)
	{
        a++;
        return 0; 
	} 
    if(a==1)
	{
		a++;
    }
	return 0;
}
*/
//----------------------------------------------

/*
int hello()
{
	printf("Hello Function is executed!");
	return 1;
}
int main()
{
	if(1 || hello()==1)
	{
		printf("If statement is executed!");
	}
}
*/

//----------------------------------------------
/*
#include <stdio.h>
void displayResult(int value) {
    if (value > 5)
        printf("Greater");
    else if (value < 0)
        printf("Lesser");
    else
        printf("Equal");
}
int main() {
    displayResult(5.99);
    return 0;
}
*/
//----------------------------------------------
/*
#include <stdio.h>
int main() {
    int a = 10, b = 5, c = 3;
    printf("%d\n", a > b && b > c);
    return 0;
}
*/

//----------------------------------------------

/*
int gradepoints=8;
if(gradepoints==10)
{
        printf("Letter grade A");
        if(gradepoints==9)
        {
        	printf("Letter grade A-");
            	if(gradepoints==8)
            	{
              		printf("Letter grade B");
              		if(gradepoints==7)
                	{
                    		printf("Letter grade B-");
                    		if(gradepoints==8)
                    		{
                        			printf("Letter grade C");
                    		}
                	}
            	}
        }
}
*/

//----------------------------------------------

/*
if(2+2==4)
{
	printf("CP ");
	if(4<=4)
	{
		printf("is ");
		if(5<=5 && 4>5)
			printf("everyone's ");
		else
		{
			printf("my ");
			if(4<10)
				printf("favourite ");
		}
	}
	else
		printf("course ");
}
*/

/*
if(2+2==4)
{
	printf("CP ");
	if(4<=4)
	{
		printf("is ");
		if(5<=5 || 4>5)
			printf("everyone's ");
		else
		{
			printf("my ");
			if(4<10)
				printf("favourite ");
		}
	}
	else
		printf("course ");
}
*/

/*
int print_time(int hours, int minutes)
{
	printf("The time is ");
	return hours;
	printf(" : ");
	return minutes;
	printf(" PM\n");
}
int main()
{
	print_time(4, 30);
	return 0;
}
*/

/*
int my_function(int a)
{
	if(a<5)
		a=5;
	else
		a=0;
    return a;
}
int main()
{
	int x=3;
	x = my_function(x);
	printf("I rate CP %d out of 5!", x);
	return 0;
}
*/

/*
int calculatePower(int exponent)
{
	return 3 * 3 * 3;
}
*/


/*
int num = 0;
if (num == 0)
    printf("Condition is true. ");
else
    printf("Condition is false. ");
*/

/*
int x = 5;
if (x > 0)   
    printf("Positive. ");
else
    printf("Non-positive. ");
printf("Value of x: %d", x);
*/

/*
#include <stdio.h>
int customFunction(int x, int y) {
    int result = x;
    if (y > 0) {
        result *= y;
    } 
	else {
        result += y;
    }
    return result;
}

int main() {
    int output = customFunction(3, -2);
    printf("%d", output);
    return 0;
}
*/

/*
int main()
{
	if (10 == 10)
	{
		printf("The condition is true. ");
    }
	printf("Always executed. ");
}
*/