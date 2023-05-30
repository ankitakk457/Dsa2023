//total no of ways in which we can go from source to destination in a n*m grid
#include <iostream>
using namespace std;

int totalno_of_ways(int m,int n){

  if(m==0 || n==0){
    return 1;
  }
   
  return totalno_of_ways(m-1,n) + totalno_of_ways(m,n-1);

}
int main() {
    // Write C++ code here
    int n,m;
    cin>>n>>m;
    int ans=totalno_of_ways(m,n);
    cout<<ans;
   

    return 0;
}
