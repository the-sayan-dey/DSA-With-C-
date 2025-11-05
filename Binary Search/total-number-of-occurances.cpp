#include<iostream>
using namespace std;

int firstOccuranceOf(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = 0;
    int ans = 0; // temporarily stores the index

    while(start <= end){
        // mid = (start + end) / 2; 
        // better logic to calculate the mid indes 
        mid = start + ((end - start)/2); // this prevents overflow

        if(arr[mid] == key){
            //return mid;
            ans = mid;
            end = mid - 1;

        }

        if(arr[mid] > key){
            end = mid - 1;
        }

        if(arr[mid] < key){
            start = mid + 1;
        }
    }

    return ans;
}

int lastOccuranceOf(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = 0;
    int ans = 0; // temporarily stores the index

    while(start <= end){
        // mid = (start + end) / 2; 
        // better logic to calculate the mid indes 
        mid = start + ((end - start)/2); // this prevents overflow

        if(arr[mid] == key){
            //return mid;
            ans = mid;
            start = mid + 1;

        }

        if(arr[mid] > key){
            end = mid - 1;
        }

        if(arr[mid] < key){
            start = mid + 1;
        }
    }

    return ans;
}


int main(){
    int arr[] = {2,4,9,13,13,13,13,17,33,77,90};
    int first = firstOccuranceOf(arr, 11, 13);
    int last = lastOccuranceOf(arr, 11, 13);

    int total_occurance = last - first + 1;
    cout<<total_occurance;
}