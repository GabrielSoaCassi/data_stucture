#include<iostream>

class Recursion{
    public:
        void calculateTailRecursion(int n){
            if( n > 0){
                int k = n*n;
                std::cout<< k <<std::endl;
                calculateTailRecursion(n-1);
            }
        }
        void calculateHeadRecursion(int n){
            if( n > 0){
                calculateHeadRecursion(n-1);
                int k = n*n;
                std::cout<< k <<std::endl;
            }
        }
        void calculateTreeRecursion(int n){
            if( n > 0){
                calculateTreeRecursion(n-1);
                int k = n*n;
                std::cout<< k <<std::endl;
                calculateTreeRecursion(n-1);
            }
        }
        int sumOfNaturalNumbers(int number){
            if(number == 0)
                return 0;
            return sumOfNaturalNumbers(number - 1) + number;
        }
        int sumOfNaturalNumberFormula(int number){
            return number*(number+1)/2;
        }

        int factorial(int n){
            if(n == 1)
                return 1;
            return factorial(n-1)*n;
        }
            
};




int main(int argc, char const *argv[])
{
    /* code */
    std::cout<< "" <<std::endl;
    return 0;
}
