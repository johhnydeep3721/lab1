#include <stdio.h>
#include <math.h>

int main() 
{
    double a , b, c;
    double x;
    printf("input number a: ");
    scanf("%lf", &a);
    printf("\ninput number b: ");
    scanf("%lf", &b);
    printf("\ninput number c: ");
    scanf("%lf", &c);

    x = 3*a - pow(b,3) - 2*sqrt(c);

    printf("\nthe value x is: %lf",x);
}
