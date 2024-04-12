#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "binary_search.h"

// list -> receive a array of int
// element -> receive a element to search in array passed
// first -> receive a first index of array for default pass 0 or 1 
// last -> last element of array usually length of array - 1
int binary_search(int list[],int element, int first, int last){
    int middle = floor((last+first)/2); 
    if((first == last) && (list[middle] != element)) 
        return -1;
    if(list[middle] == element)
        return middle;
    if(element < list [middle])
        return binary_search(list,element,first,middle);
    else  
        return binary_search(list,element,middle+1,last);
}   

int main(){

    int orderedArray[] = {1,3,6,7,9,12,15,22,90};
    int result;
    int length = sizeof(orderedArray) / sizeof(orderedArray[0]);
    result = binary_search(orderedArray,90,0,length);
    printf("Index : %d , Element on Index : %d",result,orderedArray[result]);
    getchar();
    return 0;
}