#include<iostream>
#include <vector>
using namespace std;

vector<int> findPairSum(int arr[], int size, int key){
    vector<int> pair_sum;
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            if(i == j){
                continue;
            } else{
                if(arr[i] + arr[j] == key){
                    pair_sum.push_back(arr[i]);
                    pair_sum.push_back(arr[j]);
                }
            }
        }
    }

    return pair_sum;
}

int main(){
    int arr[] = {1,2,3,4,5};
    vector<int> ans;

    ans = findPairSum(arr, 5,5);

    cout<<endl;
    for(auto num : ans){
        cout<<" "<<num<<" ";
    }
}