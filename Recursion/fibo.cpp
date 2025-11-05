// Write a recursive function in C++ to find n th fibonacci number 

// Fibonacci with recursion
#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    
    if(n == 1){
        return 1;
    }
    
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    // std::cout<<"Hello World";
    
    cout<<fibonacci(5);

    return 0;
}