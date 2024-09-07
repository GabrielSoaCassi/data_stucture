#include <iostream>
#include <cmath>
#include "SearchAlgorithm.h"



int main() {
    int array[] = {1, 2, 3, 4, 5, 6};
    int value = LinearSearchAlgorithm::LinearSearch(array, 6, 4);
    int valuBinary = BinarySearchAlgorithms::BinarySearch(array,6,4);
    std::cout << value << std::endl; 
}
