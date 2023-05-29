#include<iostream>
using namespace std;

bool rat_in_a_maze(char inp[][1000] , int sol[][1000] , int i , int j , int row , int col){

 //base case
 if(i==row-1 && j==col-1){
	 sol[i][j]=1;

	 for(int i=0;i<row;i++){
		 for(int j=0;j<col;j++){
			 
				 cout<<sol[i][j]<<" ";
			 
		 }
		 cout<<endl;
	 }
	 return true;
 }

 //recursive case

 sol[i][j]=1;

 if(j<=col-2 && inp[i][j+1]!='X'){
	 bool kya_aage_ka_Ans_true_hai = rat_in_a_maze(inp,sol,i,j+1,row,col);
	 if(kya_aage_ka_Ans_true_hai==true){
		 return true;
	 }
 }

  if(i<=row-2 && inp[i+1][j]!='X'){
	 bool kya_aage_ka_Ans_true_hai = rat_in_a_maze(inp,sol,i+1,j,row,col);
	 if(kya_aage_ka_Ans_true_hai==true){
		 return true;
	 }
 }
 sol[i][j]=0;
 return false;
}

int main() {

     int n,m,a;
	cin>>n>>m;
	char inp[1000][1000];
   
	for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
		   cin>>inp[i][j];
	   }
	}
		
	int sol[1000][1000]={0};
	
	bool ans=rat_in_a_maze(inp,sol,0,0,n,m);

	if(ans==false)
   cout<<"-1";


	return 0;
}
