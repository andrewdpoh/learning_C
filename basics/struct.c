#include <stdio.h>
#include <string.h>

// Normal struct
struct Person {
    char hobby[12];
    int age;
};

// Struct with typedef. (typedef allows you to give a certain datatype a "nickname")
typedef struct {
    char mouse[30];
    char keyboard[20];
} Setup;

int main() {
    struct Person andrew;
    strcpy(andrew.hobby, "Guitar");
    andrew.age = 20;
    printf("Andrew likes %s. His age is %d.\n", andrew.hobby, andrew.age);

    Setup setup1; 
    strcpy(setup1.mouse, "Glorious Model O");
    strcpy(setup1.keyboard, "Razer Huntsman");
    printf("His setup consists of %s and %s", setup1.mouse, setup1.keyboard);

    return 0;
}
