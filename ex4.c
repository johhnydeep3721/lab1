#include <stdio.h>

int main()
{
    const double PI = 3.14159;

    double radius;
    double area;
    double circumference;
    printf("input radius number: ");
    scanf("%lf", &radius);

    area = PI * radius* radius;
    printf("\n area of circle is: %lf", area);
    circumference = 2 * PI *radius;
    printf("\n circumference of circle is %lf", circumference);
}