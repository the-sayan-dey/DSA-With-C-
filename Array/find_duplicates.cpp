#include<iostream>
#include <map>
using namespace std;

int findDuplicateInAnArray(int arr[], int size){
    map<int, int> freq;
    
    for(int i=0; i<size; i++){
        freq[arr[i]]++;
    }

    for (auto num : freq){
        if(num.second > 1){
            return num.first;
        }
    }
    return -1;
}

int main(){
    int arr[] = {5,1,2,4,2};
    cout<<findDuplicateInAnArray(arr, 5);
}