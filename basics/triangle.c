#include <stdio.h>
#include <math.h>

// Calculating the length of the hypotenuse
int main() {
    double side1;
    double side2;
    double hypotenuse;

    printf("Enter length of first side: ");
    scanf("%lf", &side1);
    printf("Enter length of second side: ");
    scanf("%lf", &side2);

    hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));

    printf("Length of hypotenuse is %lf", hypotenuse);

    return 0;
}