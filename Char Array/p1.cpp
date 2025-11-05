// Reverse a character array 

#include<iostream>
using namespace std;

void reverse(char ch[], int len){
    int s = 0;
    int e = len - 1;

    while(s < e){
        swap(ch[s++], ch[e--]);
    }
}

int getLength(char ch[]){
    int count = 0;

    for (int i=0; ch[i] != '\0'; i++){
        count++;
    }

    return count;
}

int main(){

    char name[100];
    cout<<"Enter your name: ";
    cin>>name;

    int len = getLength(name);
    cout<<endl;
    cout<<"Length of your name is: "<<len<<endl;

    cout<<"After reversal: ";
    reverse(name, len);
    cout<<name;

    return 0;
}