
#include <iostream>
using namespace std;

bool isPrime(int n){
    
    if(n <= 0){
        return false;
    }
    
    for (int i=2; i<n; i++){
        if (n % i == 0){
            return false;
        }
    }
    
    return true;
}

int countPrimes(int n){
    int count = 0;
    for (int i=0; i<=n; i++){
        if (isPrime(i)){
            count++;
        }
    }
    
    return count;
}

int main()
{
    std::cout<<"Hello World";
    
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int num = countPrimes(n);
    cout<<endl<<num<<" number of prime found!";

    return 0;
}