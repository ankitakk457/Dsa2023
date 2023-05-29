#include<iostream>
using namespace std;
int c=0;
bool queen_can_placed(int sol[][11],int n,int i,int j){
	//check vertically
	for(int m=i;m>=0;m--){
       if(sol[m][j]==1){
		   return false;
	   }
	}
	// diagonally rd
	int u=i-1;//1
	int v=j+1;//3
	while(u>=0 and v<n){
			if(sol[u][v]==1){
			return false;

		}
		u--;//0 -1
		v++;//4 5

	}

	// left dia
	int p=i-1;//1
	int q=j-1;//1
		while(p>=0 and q>=0){
			if(sol[p][q]==1){
			return false;

		}
		p--;//
		q--;//

	}


	return true;



}
bool nqueen(int sol[][11],int n,int i){
	//base case
	if(i==n){
    for(int m=0;m<n;m++){
      for(int q=0;q<n;q++){
        cout<<sol[m][n]<<endl;
      }
    }
        i++;
		return false;
	}
     
	//recursive case
    for(int j=0;j<n;j++){
		if(queen_can_placed(sol,n,i,j)){
			sol[i][j]=1;
			bool aage_ka_ans_true = nqueen(sol,n,i+1);
			if(aage_ka_ans_true){
				return true;
			}
			sol[i][j]=0;
		}
		
	}
	return false;
}

int main() {

	int sol[11][11]={0};
	int n;
	cin>>n;

	nqueen(sol,n,0);
	cout<<c<<endl;
	return 0;
}
