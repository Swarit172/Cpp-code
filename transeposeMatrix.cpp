/* Transepose Matrix (Leetcode)

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int row,col;
	cout<<"Enter number of row: ";
	cin>>row;
	cout<<"Enter number of column: ";
	cin>>col;
	int matrix[row][col];
	int ans[col][row];
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>matrix[i][j];
		}
	}
	
	cout<<"Before transepose"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//transepose - store transepose value in new matrix
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			ans[j][i]=matrix[i][j];
		}
	}
	
	cout<<"After tansepose"<<endl;
	for(int i=0;i<col;i++){
		for(int j=0;j<row;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
