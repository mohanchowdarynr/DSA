#include<iostream>
using namespace std;

int power(int x,int y){
   if(y == 0) return 1;
   if(x == 1 || x ==0) return 1;
   return x * power(x,y-1);
}

int main(){

    int inp1 = 2,inp2 = 6;
    cout << power(inp1,inp2);

}
