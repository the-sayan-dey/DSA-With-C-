#include<iostream>
#include<vector>
#include <climits>

using namespace std;

int solve(vector<int>& num, int x){
    if(x == 0){
        return 0;
    }

    if(x < 0){
        return INT_MAX;
    }

    int ans = 0;
    int mini = INT_MAX;

    for(int i = 0; i<num.size(); i++){
        ans = solve(num, x - num[i]);

        if(ans != INT_MAX){
            mini = min(mini, ans+1);
        }
    }

    return mini;
}

int minimumElements(vector<int>& num, int x){
    int ans = solve(num, x);

    if(ans == INT_MAX){
        return -1;
    } else{
        return ans;
    }
}

int main(){
    vector<int> num = {1,2,3};
    cout<<minimumElements(num, 7);
}