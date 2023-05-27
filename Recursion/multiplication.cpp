#include<iostream>
using namespace std;

int multiplication(int a,int b){
    //base case
    if(b==0){
        return 0;
    }
    //recursive case
    return a+multiplication(a,b-1);
}

int main(){
    int a,b;
    cin>>a>>b;
    
    int ans=multiplication(a,b);
    cout<<ans<<endl;
}
