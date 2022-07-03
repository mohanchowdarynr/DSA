#include<iostream>
using namespace std;

bool isPalindrome(int l,int r,string check){
    // cout << check.length();
    // int len =  check.length();
    // // cout << len/2;
    // for(int i =0;i <= len/2;i++){
    //     for(int j = len-1;j >= len/2;j--){
    //         if(check[i] != check[j]){
    //             cout << check[i] << endl;
    //             cout << check[j] << endl;
    //            return false;
    //         }
    //     }
    // }
    if(l>=r)return true;
    if(check[l] != check[r]) return false;

    return isPalindrome(l+1,r-1,check);
}

int main(){

string name = "rotator";
int len = name.length();
cout << isPalindrome(0,len-1,name);

}
