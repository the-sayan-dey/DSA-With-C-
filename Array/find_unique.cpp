#include<iostream>
using namespace std;

int countAppreanceOfANumberInArray(int arr[], int size, int element){
    int count = 0;
    for (int i=0; i<size; i++){
        if(arr[i] == element){
            count++;
        }
    }

    return count;
}

int findUniqueElementFromTheArray(int arr[], int size){
    int unique_elemenmt;
    int count = 0;
    for(int i=0; i<size; i++){
        count = countAppreanceOfANumberInArray(arr, size, arr[i]);

        if(count == 1){
            return arr[i];
        }
    }

    return -1;
}

int main(){
    int arr[] = {3,7,2,2,7,3,4};
    cout<<(findUniqueElementFromTheArray(arr, 7));

    cout<<endl;
    int arr2[] = {3,7,2,2,7,3};
    cout<<(findUniqueElementFromTheArray(arr2, 6));
}