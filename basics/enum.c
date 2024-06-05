#include <stdio.h>

enum Day{Mon, Tue, Wed, Thu, Fri, Sat, Sun};

int main(){
    enum Day today = Wed;

    if(today == Sat || today == Sun){
        printf("Weekend!");
    } else {
        printf("Weekday...");
    }
}
