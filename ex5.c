#include <stdio.h>
#include <math.h>

int main()
{
    const double a = 1, b = 2, c = 1;
    double x = (- b + sqrt(pow(b,2)-4*a*c))/2*a;
    printf("value of x is: %lf", x);
}