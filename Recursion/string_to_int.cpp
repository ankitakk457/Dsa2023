// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

int string_to_int(string s,int l){
    //base case
    if(l==0){
        return 0;
    }
    //recursive case
    char a = s[l-1];
    int  b = a - '0';
    
    return string_to_int(s,l-1)*10 + b;
}

int main() {
    // Write C++ code here
    string s;
    cin>>s;
    int l = s.length();
    cout<<"string "<<s<<endl;
    
    int ans = string_to_int(s,l);
    cout<<"int "<<ans<<endl;
    
    return 0;
}
