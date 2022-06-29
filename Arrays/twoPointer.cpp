#include <iostream>
using namespace std;

int findIndexes(int passed[],int target,int length){
    int start = 0;
    int ending = length - 1;

    while(start < ending){
        if(passed[start] + passed[ending] == target){
            cout << passed[start] << passed[ending] << "equal" <<endl;
            return 1;
        }else if(passed[start]+passed[ending] < target){
             cout << passed[start] << passed[ending] << "less" <<endl;
            start++;
        }else{
             cout << passed[start] << endl << passed[ending] << "great"<<endl;
            ending--;
        }
    }
    return 0;
}

int main(){
    int arr[] = {10, 20, 35, 50, 75, 80};
    int target = 70;
    int length = sizeof(arr)/sizeof(arr[0]);
    int result = findIndexes(arr,target,length);
    cout << result;
}
