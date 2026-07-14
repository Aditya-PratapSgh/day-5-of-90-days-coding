#include<iostream>
#include<stack>
using namespace std;
void pushAtBottom(stack<int> &s, int val){
    if(s.empty()){
        s.push(val);
    return ;
    }
    int temp=s.top();
    s.pop();
    pushAtBottom(s, val);
    s.push(temp);

}
void revstack(stack<int> &s){
    if(s.empty()){
    return ;
    }
    int temp=s.top();
    s.pop();
    revstack(s);
    pushAtBottom(s, temp);
}
void printstack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();

    }
    cout<<endl;
}

int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    cout<<"before REv stack = ";
    printstack(s);
    revstack(s);
    cout<<"after rev stack = ";
    printstack(s);
    return 0;

}