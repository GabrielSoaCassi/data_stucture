#ifndef SEARCH_ALGORITHMS
#define SEARCH_ALGORITHMS

class LinearSearchAlgorithm {
public:
    // Linear search (array doesn't need to be in order)
    static int LinearSearch(int* array, int length, int target) {
        for (int index = 0; index < length; ++index) {
            if (array[index] == target)
                return index;
        }
        return -1;
    }
};

class BinarySearchAlgorithms {
public:
    // Binary search (array needs to be in order)
    static int BinarySearch(int* array, int length, int target) {
        int left = 0;
        int right = length - 1;
        while (left <= right) {
            int middle = (left + right) / 2;
            if (target == array[middle])
                return middle;
            else if (target < array[middle])
                right = middle - 1;
            else
                left = middle + 1;
        }
        return -1;
    }

    // Binary search (recursive version)
    static int BinarySearchRecursive(int* array, int target, int left, int right) {
        if (left > right)
            return -1;

        int middle = (left + right) / 2;

        if (target == array[middle])
            return middle;
        else if (target < array[middle])
            return BinarySearchRecursive(array, target, left, middle - 1);
        else
            return BinarySearchRecursive(array, target, middle + 1, right);
    }
};

#endif // SEARCH_ALGORITHMS
