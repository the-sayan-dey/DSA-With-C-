#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = 0;

    while(start <= end){
        // mid = (start + end) / 2; 
        // better logic to calculate the mid indes 
        mid = start + ((end - start)/2); // this prevents overflow

        if(arr[mid] == key){
            return mid;
        }

        if(arr[mid] > key){
            end = mid - 1;
        }

        if(arr[mid] < key){
            start = mid + 1;
        }
    }

    return -1;
}

int main(){
    int even[] = {2,4,9,13,17,33,77,90};
    int odd[] = {1,3,7,9,14};

    cout<<binarySearch(even, 8, 13);
    cout<<endl;
    cout<<binarySearch(odd, 5, 9);
}