#include<stdio.h>
#include<math.h>

double hypotenuse(double s1, double s2)
{
    //double h = sqrt(pow(s1, 2) + pow(s2,2));
    return (sqrt(pow(s1, 2) + pow(s2,2)));
}

int main()
{
    double a , b;
    printf("Enter l : ");
    scanf("%lf",&a);
    printf("Enter b : ");
    scanf("%lf",&b);

    printf("The length of hypotenuse is  : %lf\n", hypotenuse(a,b));
    return 0;
}