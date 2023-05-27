#include<iostream>
using namespace std;

bool check_if_array_has_7(int arr[],int n,int i){
    //base case
    if(i==n){
        return false;
    }
     if(arr[i]==7){ 
      return true;
    }
    //recursive case

    return check_if_array_has_7(arr,n,i+1);
    
}

int main(){
  
    int arr[]={2,3,5,6,1,8,7};
    //int arr[]={2,3,5,6,1,8,9};
    int n=sizeof(arr)/sizeof(int);
    
    
if(check_if_array_has_7(arr,n,0)==true){
    cout<<"true";
}
else{
    cout<<"false";
}
 
}
