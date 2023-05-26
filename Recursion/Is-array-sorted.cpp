#include <iostream>
using namespace std;

bool is_sorted_or_not(int arr[],int n){
    
    if(n==1){
        
        return true;
    }
    
    if(is_sorted_or_not(arr,n-1) && arr[n-2]<=arr[n-1]){
        return true;
    }
    return false;
}

int main() {
    // Write C++ code here
    int arr[]={1,2,3};
    int n = sizeof(arr)/sizeof(int);    
    if(is_sorted_or_not(arr,n)==true){
        cout<<"SORTED"<<endl;
    }
    else{
        cout<<"UNSORTED"<<endl;
    }
   
    return 0;
}
