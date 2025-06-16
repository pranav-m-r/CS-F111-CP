#include <stdio.h>
#include <math.h> //Math functions - all functions take double as the argument and return double
//To compile you must use the -lm flag

int main()
{
	double a = 1.5;
	int b = 3;

    printf("a = %lf, b = %d\n", a, b);

	//ceil(double) will return the ceil value
	printf("Ceil of a = %lf\n", ceil(a));

	//floor(double) will return the floor value
	printf("Floor of a = %lf\n", floor(a));

	//log(double) will return the log (base e) value
	printf("Log a = %lf\n", log(a));

	//log10(double) will return the log (base 10) value
	printf("Log (base 10) a = %lf\n", log10(a));

	//sqrt(double) will return the square root value
	printf("Sqrt a = %lf\n", sqrt(a));

	//pow(double,double ) will return the value of 1st argument to the power 2nd argument
	printf("a ^ b = %lf\n", pow(a,b));

	double angle = 60.0;
	double radian = angle*(3.14/180.0);

	//cos(double) will return the cosine of radian angle x
	printf("Cos(a) = %lf\n", cos(radian));

	//sin(double) will return the sin of radian angle x
	printf("Sin(a) = %lf\n", sin(radian));

	//tan(double) will return the tan of radian angle x
	printf("Tan(a) = %lf\n", tan(radian));

	return 0;
}