#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    
    int smallerProblem = factorial(n - 1);
    int biggerProblem = n * smallerProblem;
    
    return biggerProblem;
}

int main(){
    
    std::cout << "Factorial of 5 is: "<< factorial(5) << std::endl;
    
    return 0;
}