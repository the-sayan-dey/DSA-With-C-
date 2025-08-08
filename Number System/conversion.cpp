#include<iostream>
using namespace std;

int decimalToBinary(int decNum){
    int ans = 0;
    int pow = 1;

    while(decNum>0){
        int rem = decNum % 2;
        decNum = decNum / 2;

        ans = ans + (rem*pow);
        pow = pow * 10;
    }

    return ans;
}

int binaryToDecimal(int binNum){
    int ans = 0;
    int pow = 1;

    while(binNum > 0){
        int rem = binNum % 2;
        ans = ans + (rem*pow);
        pow = pow * 2;
    }

    return ans;
}

int main(){
    int decNum = 10;
    cout<<decimalToBinary(decNum)<<endl;

    int binNum = 1010;
    cout<<binaryToDecimal(binNum)<<endl;
}