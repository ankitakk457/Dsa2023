#include<iostream>
using namespace std;

int first_index_of_7(int arr[],int n,int i){
    //base case
    if(i==n){
        return -1;
    }
     if(arr[i]==7){ 
      return i;
    }
    //recursive case

    return first_index_of_7(arr,n,i+1);
    
}
int last_index_of_7(int arr[],int n,int i){
    //base case
    if(i==-1){
        return -1;
    }
     if(arr[i]==7){ 
      return i;
    }
    //recursive case

    return last_index_of_7(arr,n,i-1);
    
}
void all_indices_of_7(int arr[],int n,int i){
    //base case
    if(i==n){
        return ;
    }
     if(arr[i]==7){ 
      cout<<i<<" ";
    }
    //recursive case

    return all_indices_of_7(arr,n,i+1);
    
}
 


int main(){
  
    int arr[]={1,7,2,3,7,5,6,1,8,7};
    int n=sizeof(arr)/sizeof(int);
    
    int ans1=first_index_of_7(arr,n,0);
    cout<<"first index"<<" "<<ans1<<endl;
    
    int ans2=last_index_of_7(arr,n,n-1);
    cout<<"last index"<<" "<<ans2<<endl;
    
    cout<<"all index"<<" ";
    all_indices_of_7(arr,n,0);
    
    return 0;
    
    
   
}
