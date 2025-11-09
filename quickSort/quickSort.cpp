/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>
using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int partition(vector<int>& arr, int s, int e){
    int i = s;
    int j = e;
    int pivot = arr[s];
    
    while(i < j){
        do{
            i++;
        } while(arr[i] <= pivot);
        
        do{
            j--;
        } while(arr[j] > pivot);
        
        swap(arr[i], arr[j]);
    }
    
    swap(arr[j], arr[s]);
    
    return j;
    
}

void quickSort(vector<int>& arr, int s, int e){
    if(s >= e){
        return;
    }
    
    int partitionIndex = partition(arr, s, e);
    
    quickSort(arr, s, partitionIndex);
    quickSort(arr, partitionIndex + 1, e);
}

int main()
{
    // std::cout<<"Hello World";
    vector<int> arr = {4,1,44,77,7,13};
    int size = arr.size();
    int start = 0;
    int endIndex = size - 1;
    
    quickSort(arr, start, endIndex);
    
    for(auto elem : arr){
        cout<< elem <<" ";
    }

    return 0;
}