#include <iostream>
#include<string>
using namespace std;

void tower_of_hanoi(int n,char source, char helper,char destination){
    //base case
    if(n==0){
        return ;
    }
    //recursive case
    tower_of_hanoi( n-1, source, destination, helper);
   
    cout<<"Move disk from"<<source<<"to"<<destination<<endl;

    tower_of_hanoi( n-1, helper, source, destination);
}

int main() {
    // Write C++ code here
  
    int n;
    cin>>n;
 
    tower_of_hanoi( n, 'A', 'B', 'C');
    
    return 0;
}
