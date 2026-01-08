
#include<iostream>
#include<string>
#include<stack>
using namespace std;


void solve(stack<int> &s, int x){
    // base case 
    if(s.empty()){
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    // recursive call
    solve(s,x);
    s.push(num);
}

stack<int> pushAtBottom(stack<int> &myStack, int x){
    solve(myStack, x);
    return myStack;
}

void displayStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

void reverseStack(stack<int> &stack){
    // base case
    if(stack.empty()){
        return ;
    }

    int num =  stack.top();
    stack.pop();

    // recursive call
    reverseStack(stack);
    pushAtBottom(stack, num);
}


int main(){
    stack<int> stk;
    stk.push(3);
    stk.push(1);
    stk.push(7);
    stk.push(4);

    displayStack(stk);
    pushAtBottom(stk,13);
    displayStack(stk);

    reverseStack(stk);
    displayStack(stk);

}