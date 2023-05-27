#include<iostream>
using namespace std;
string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void reverse_word(int i){
    //base case
    if(i==0){ 
      return;
    }
  //recursive case
    int index=i%10;
    cout<<arr[index]<<" ";
    reverse_word(i/10);
    
}

int main(){
    int a;
    cin>>a;
    
  reverse_word(a);
 
}
