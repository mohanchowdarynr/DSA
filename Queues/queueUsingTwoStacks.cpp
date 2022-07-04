#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack s1;
    stack s2;

    void push(int data){
        s1.push(data);
    }

    int pop(){
        while(!s1.empty){
            s2.push(s1.pop());
        }
        int ans = s2.pop();
        while(!s2.empty){
            s1.push(s2.pop());
        }
        return ans;
    }
    // s1.push(1);
    // while(!s1.empty()){
    //     cout << s1.pop();
    // }
}
