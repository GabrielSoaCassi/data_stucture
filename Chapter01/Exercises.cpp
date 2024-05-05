#include "iostream"
// using only pointer write a function to sum all number in an array
// a function to remove all odd numbers in an  ordered array. the array need be ordered at final,   is easier write this if that is not ordered?

void f1ToSum(int array[],int sizeArray){
    int sumTotal = 0;
    for(int i=0; i < sizeArray; i++){
        sumTotal += (*array);
        *array++;
    }
    std::cout <<sumTotal<< std::endl;
}



void checkTheArrayOdds(int array[],int *sizeArray){
    int writeIndex = 0;
    for (int i = 0; i < (*sizeArray); ++i) {
        if(!(array[i] & 1)) {
           array[writeIndex++] = array[i];
        }
    }
    (*sizeArray) = writeIndex;
}

int main(){
    int arrayInt[] = {1,2,3,4,5,8,9,30};
    int sizeArray = sizeof(arrayInt)/sizeof(*arrayInt);
//    f1ToSum(arrayInt,sizeArray);
    checkTheArrayOdds(arrayInt,&sizeArray);
    for (int i = 0; i < sizeArray; ++i) {
        std::cout <<arrayInt[i]<< std::endl;
    }
    return 0;
}