#include<iostream>
using namespace std;

bool isPossible(int arr[], int m, int n, int mid){
    int studentCount = 1;
    int pageSum = 0;

    for(int i=0; i<n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum = pageSum + arr[i];
        } else{
            studentCount++;
            if (studentCount > m || arr[i] > mid){
                return false;
            }

            pageSum = arr[i];
        }
    }

    return true;
}

int allocateBooks(int arr[], int m, int n){
    int s = 0;
    int sum = 0;

    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while(s <= e){
        if(isPossible(arr, m ,n, mid)){
            ans = mid;
            e = mid - 1;
        } else{
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

int main(){
    int arr[] = {12, 34, 67, 90};
    int m = 2;
    int n = 4;

    cout<<allocateBooks(arr, m, n);
}