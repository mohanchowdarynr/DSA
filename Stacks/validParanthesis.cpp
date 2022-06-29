#include <iostream>
#include <stack>
using namespace std;

bool ValidParanthesis(string target,int length){
    stack<char> s1;
    for(int i=0;i < length;i++){
        cout << target[i] << endl;
        if(target[i] == '(' || target[i] == '[' || target[i] == '{'){
            s1.push(target[i]);
        }else{

        if(s1.empty()){
                return false;
        }

        // if(s1.top() == target[i] ) s1.pop();
        char c= s1.top();
        s1.pop();
        cout << c << "char" << endl;
        if((target[i] == ')' && c == '(') || (target[i] == ']' && c == '[') || (target[i] == '}' && c == '{')){
             cout << true << endl;
        }else{
            return false;
        }
        }

    }
    cout << "coming here" << endl;
    if(s1.empty())return true;
    return false;
}


int main(){
    string str = "()[]{}";
    // cout << str.length() << endl;
   int count = 0;
   while(str[count]){
    count++;
   }
   cout << "coming here" << endl;
   if(ValidParanthesis(str,count)){
    cout << "balanced" << endl;
   }else{
    cout << "Unbalanced" << endl;
   }
}
