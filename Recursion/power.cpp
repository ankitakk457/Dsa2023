#include<iostream>
using namespace std;

int power(int a,int b){
    //base case
    if(b==0){
        return 1;
    }
    //recursion case
    return power(a,b-1)*a;
}

int main(){
    int a,b;
    cin>>a>>b;
    
    int ans=power(a,b);
    cout<<ans<<endl;
}
