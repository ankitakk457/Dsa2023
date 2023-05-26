// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void decreasing(int arr[],int n,int i){
    
    if(i==n){
        
        return ;
    }
    decreasing(arr,n,i+1);
    cout<<arr[i]<<" ";
    
    
}

int main() {
    // Write C++ code here
    int arr[]={1,2,3,4};
    int i=0;
    int n = sizeof(arr)/sizeof(int);    
    decreasing(arr,n,i);
   
   
   return 0;
}
