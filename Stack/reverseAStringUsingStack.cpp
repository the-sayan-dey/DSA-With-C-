#include<iostream>
#include<string>
#include<stack>
using namespace std;

string reverseUsingStack(string str){
    
    stack<char> stk;
    for (int i=0; i<str.length(); i++){
        stk.push(str[i]);
    }

    string ans = "";
    char ch;
    while(!stk.empty()){
        ch = stk.top();
        ans.push_back(ch);
        stk.pop();
    }

    return ans;

}

int main(){
    string str = "sayan";
    string ans = reverseUsingStack(str);
    cout<<ans;
}