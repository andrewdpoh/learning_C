#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0)); // generate a seed for the random function based on the current time
    int num = rand() % 6 + 1; // generate the random number. By default it will be between 0 - 32676. Using % 6, it divides by 6 and gets the remainder, effectively making the range 0 - 5. By adding 1, it makes the range 1 - 6.

    printf("%d",num);
    return 0;
}