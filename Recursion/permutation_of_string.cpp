#include <iostream>
#include<string>
using namespace std;

void permutation_of_string(char inp[10000],int i){
    //base case
    if(inp[i]=='\0'){
        cout<<inp<<endl;
        return ;
    }
    //recursive case
    
    for(int j=i;inp[j]!='\0';j++)  {
        swap(inp[i],inp[j]);
        permutation_of_string(inp,i+1);
        swap(inp[i],inp[j]);
    }
    
}

int main() {
    // Write C++ code here
  char inp[1000];
  cin>>inp;
  
  permutation_of_string(inp,0);
    
  return 0;
}
