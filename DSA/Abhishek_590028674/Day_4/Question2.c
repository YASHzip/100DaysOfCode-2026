#include <stdio.h>
#include <stdlib.h>

void arrRot(int arr[], int arrSize, int k){
    int *resArr = malloc(sizeof(int)*arrSize);
    for(int i=0; i<arrSize; i++){
        int fromVal = arr[(arrSize-k+i)%arrSize];
        resArr[i] = fromVal;
        printf("%d ", fromVal);
    }
}

int main(){
    int exampleArr[] = {1 ,2 ,3 ,4};
    arrRot(exampleArr, sizeof(exampleArr)/sizeof(exampleArr[0]), 2);
    return 0;
}