#include <stdio.h>
#include <stdbool.h>

void sortNums(int array[], int arraySize){
    int temp;
    int current;
    int next;

    for(int i = 0; i < arraySize - 1; i++){
        for(int j = 0; j < arraySize - 1; j++){
            if(array[j] > array[j+1]){ //swap if the previous element is larger
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
    for(int k = 0; k < arraySize; k++){printf("%d ", array[k]);}
}


int main(){
    int numArr[] = {9,2,4,1,6,5,7,8,3};
    int arraySize = sizeof(numArr)/sizeof(numArr[0]);

    sortNums(numArr, arraySize);
    return 0;
}

