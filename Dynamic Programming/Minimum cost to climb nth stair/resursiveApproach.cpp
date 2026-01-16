#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>& cost, int n){
    // base case
    if(n == 0){
        return cost[0];
    }

    if(n == 1){
        return cost[1];
    }

    // recursive call
    int ans = min(solve(cost, n-1), solve(cost, n-2)) + cost[n];

    return ans;
}

int minCostToClimbNthStair(vector<int>& cost){
    int n = cost.size();

    int ans = min(solve(cost, n-1), solve(cost, n-2));
    return ans;
}

int main(){
    vector<int> cost = {1,100,1,1,1,100,1,1,100,1};
    int ans = minCostToClimbNthStair(cost);

    cout<<ans<<endl;
}