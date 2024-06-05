#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int numberAdder(int num1, int num2){
    int result;
    result = num1 + num2;
    return result;
}

int main(){
    char numbers[24];
    char num1Str[12] = "";
    char num2Str[12] = "";
    int num1;
    int num2;
    bool splitYet = false;
    int output;

    printf("Enter 2 integers, separated with a [SPACE]: ");
    fgets(numbers, sizeof(numbers), stdin);

    for (int i = 0; i < strlen(numbers); i++){
        if(numbers[i] == ' '){
            splitYet = true;
            continue;
        } else {
            if(!splitYet){
                strncat(num1Str, &numbers[i], 1);
            } else {
                strncat(num2Str, &numbers[i], 1);
            }
        }
    }
    num1 = atoi(num1Str);
    num2 = atoi(num2Str);

    output = numberAdder(num1, num2);
    printf("Result: %d", output);
    
    return 0;
}