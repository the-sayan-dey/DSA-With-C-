// Video Link: https://www.youtube.com/watch?v=6z2HK4o8qcU&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=14

// Question: Find the peak of mountain in a sorted array in C++

#include<iostream>
using namespace std;

int peakOfTheMountain(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while(start < end){
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        } else{
            end = mid;
        }

        mid = (start + end) / 2;
    }

    return start;

}

int main(){
    int arr[] = {0,10,5,2};
    cout<<peakOfTheMountain(arr, 4);
}