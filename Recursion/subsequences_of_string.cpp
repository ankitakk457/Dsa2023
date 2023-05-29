#include <iostream>
#include<string>
using namespace std;

void subsequences_of_string(char inp[10000],int i,char out[10000],int j){
    //base case
    if(inp[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return ;
    }
    //recursive case
    out[j]=inp[i];
    
    subsequences_of_string(inp,i+1,out,j+1);
    
    subsequences_of_string(inp,i+1,out,j);
    
}

int main() {
    // Write C++ code here

  char inp[1000],out[10000];
  cin>>inp;
  
  subsequences_of_string(inp,0,out,0);
    
  return 0;
}
