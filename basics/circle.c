#include <stdio.h>
#include <math.h>

// Calculating the circumference and area of a circle
int main() {
    //declaration
    const double PI = 3.141592653589793;
    double radius;
    double circumference;
    double area;

    //input
    printf("Enter circle radius: ");
    scanf("%lf", &radius);

    //calculation
    circumference = 2 * PI * radius;
    area = PI * pow(radius, 2);

    //output
    printf("\nCircle circumference is %.2lf units", circumference);
    printf("\nCircle area is %.2lf units squared", area);

    return 0;
}