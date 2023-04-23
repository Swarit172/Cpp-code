/* Spiral Matrix (leetcode) -- VERY IMP
	print the number of matrix in spiral form
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(int matrix[][3],int row,int col) {
        vector<int> ans;
        //int row=matrix.size();
        //int col=matrix[0].size();

        //index intialization
        int startRow=0;
        int startCol=0;
        int endRow=row-1;
        int endCol=col-1;

        int count=0;
        int total=row*col;

        while(count < total){
            //starting row
            for(int index=startCol;index<=endCol;index++){
                ans.push_back(matrix[startRow][index]);
                count++;
            }
            startRow++;

            //ending col
            for(int index=startRow;index<=endRow;index++){
                ans.push_back(matrix[index][endCol]);
                count++;
            }
            endCol--;

            //ending row
            if(startRow<=endRow){
                for(int index=endCol;index>=startCol;index--){
                    ans.push_back(matrix[endRow][index]);
                    count++;
                }
                endRow--;
            }

            //starting col
            if(startCol<=endCol){
                for(int index=endRow;index>=startRow;index--){
                    ans.push_back(matrix[index][startCol]);
                    count++;
                }
                startCol++;
            }
        }

        return ans;
    }

int main(){
	int n=3;
	int m=3;
	int matrix[n][m];
	
	for(int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cin>>matrix[row][col];
		}
	}
	
	cout<<spiralOrder(matrix,n,m);
}
