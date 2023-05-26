#include <iostream>
using namespace std;

void increasing(int arr[],int n,int i){
    
    if(i==n){
        
        return ;
    }
    
    cout<<arr[i]<<" ";
    
    increasing(arr,n,i+1)  ;
    
}

int main() {
    // Write C++ code here
    int arr[]={1,2,3,4};
    int i=0;
    int n = sizeof(arr)/sizeof(int);    
    increasing(arr,n,i);
   
   
   return 0;
}
