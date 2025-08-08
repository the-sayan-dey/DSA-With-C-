#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort01(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void display(int arr[], int size){
    cout << endl;
    for (int i=0; i<size; i++){
        cout<<" "<< arr[i]<<" ";
    }
    cout<< endl;
}


int main(){
    int arr[] = {0,1,1,0,0,1};
    display(arr, 6);
    sort01(arr, 6);
    display(arr, 6);
}