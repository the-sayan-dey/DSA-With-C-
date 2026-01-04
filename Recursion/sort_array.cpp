#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int>& arr, int val){
    if(arr.size() == 0 || arr[arr.size() - 1] <= val){
        arr.push_back(val);
        return;
    }

    int temp = arr[arr.size() - 1];
    arr.pop_back();

    insert(arr,val);
    arr.push_back(temp);

}

void sortArray(vector<int>& arr){
    if(arr.size() == 1){
        return;
    }

    int temp = arr[arr.size() - 1];
    arr.pop_back();
    sortArray(arr);
    
    insert(arr, temp);
}

int main(){
    vector<int> arr = {7,9,1,3,0,8,0};

    sortArray(arr);

    for(auto elem : arr){
        cout<<elem<<" ";
    }

    return 1;
}