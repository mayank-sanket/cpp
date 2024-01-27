
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {12, 1, 123, 43, 32};
    //find the largest element in the array
    
    int max = INT_MIN;
    for(int i=0; i<5; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    cout<<"Max element: "<<max<<endl;
    return 0;
}