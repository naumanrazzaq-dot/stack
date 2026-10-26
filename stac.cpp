#include<iostream>
#include<list>
#include<deque>
#include<stack>
using namespace std;
int main(){
 // we cannot remove values in stack from start we have to remove upper values first
    stack<int> s;
    s.push(1);
    s.push(4);
    s.push(2);
    while(!s.empty()){
        // top to print uper value
        cout<<s.top()<<" ";
        s.pop();
        // it means after printing uper value delete it
    };
    s.empty();


   
}