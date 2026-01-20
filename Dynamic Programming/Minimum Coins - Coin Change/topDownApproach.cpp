#include<iostream>
#include<vector>
#include <climits>

using namespace std;

int solve(vector<int>& num, int x, vector<int>& dp) {
    // base cases
    if (x == 0)
        return 0;

    if (x < 0)
        return INT_MAX;

    // already computed
    if (dp[x] != -1)
        return dp[x];

    int mini = INT_MAX;

    for (int i = 0; i < num.size(); i++) {
        int ans = solve(num, x - num[i], dp);

        if (ans != INT_MAX) {
            mini = min(mini, 1 + ans);
        }
    }

    dp[x] = mini;
    return mini;
}


int minimumElements(vector<int>& num, int x){
    vector<int> dp(x+1, -1);

    int ans = solve(num, x, dp);

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