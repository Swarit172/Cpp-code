/*
Print like a wave (coding ninja)
-- print the first column top to bottom,
   next column bottom to top and so on...
   
   matrix-
   1 2
   3 4
   ans-
   1, 3, 4, 2  

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<vector<int>> arr;
	//int arr[3][3];
	int a[10];
	int x=0;
	
	for(int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cin>>arr[row][col];
		}
	}
	
	for(int col=0;col<3;col++){
		if(col%2==0){ //when col is even
			for(int row=0;row<3;row++){
				a[x]=arr[row][col];
				x++;
			}
		}
		else{ // when col is odd 
			for(int row=2;row>=0;row--){
				a[x]=arr[row][col];
				x++;
			}
		}
	}
	
	for(int i=0;i<sizeof(a)/sizeof(a[0])-1;i++){
		cout<<a[i]<<" ";
	}
}
