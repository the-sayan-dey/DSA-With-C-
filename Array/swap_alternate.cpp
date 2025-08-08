#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap_alternate(int arr[], int size){
    // for (int i=0; i<size; i = i+2){
    //     if(arr[i+1] > (size-1) || arr[i] > (size - 1)){
    //         continue;
    //     }
    //     swap(&arr[i], &arr[i+1]);
    // }/

    for (int i = 0; i < size - 1; i += 2){  // ensure i+1 is within bounds
        swap(&arr[i], &arr[i + 1]);
    }
}

void display(int arr[], int size){
    cout<<endl;
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4,5,6};
    display(arr,5);
    swap_alternate(arr,5);
    display(arr,5);

    display(arr2,6);
    swap_alternate(arr2,6);
    display(arr2,6);


}