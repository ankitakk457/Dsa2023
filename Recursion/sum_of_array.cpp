#include <iostream>
using namespace std;

int sum_of_array(int arr[],int n){
    
    if(n==0){
        
        return 0;
    }
    
    return sum_of_array(arr,n-1) + arr[n-1] ;
    
}

int main() {
    // Write C++ code here
    int arr[]={1,2,4};
    int n = sizeof(arr)/sizeof(int);    
    int ans=sum_of_array(arr,n);
    cout<<ans<<endl;
   
   return 0;
}
