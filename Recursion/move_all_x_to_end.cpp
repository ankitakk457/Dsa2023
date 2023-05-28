#include <iostream>
#include<string>
using namespace std;

string move_all_x_at_end(string s){
    //base case
    if(s.length()==0){
        return s;
    }
    //recursive case
  char ch=s[0];
  if(ch=='x'){
      return move_all_x_at_end(s.substr(1)) + ch;
  }
  else{
       return  ch + move_all_x_at_end(s.substr(1));
  }
}

int main() {
    // Write C++ code here
  
  string s;
  cin>>s;
  
  cout<<"Answer : "<<move_all_x_at_end(s)<<endl;
    
    return 0;
}
